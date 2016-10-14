#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

void Cursor(int, int);
int main();
char Final_Destination();

char Theater_Game() {
	char gameBoard[100][100];
	int x, y, Xfood, Yfood, i;
	int Xbody[2000];
	int Ybody[2000];
	char e, bye;



	//Initialize Variables
	int xmax = 50;
	int xmin = 1;
	int ymax = 22;
	int ymin = 1;
	int Xc = 10;
	int Yc = 10;
	char dir = 'a';
	int score = 0;
	int move = 0;
	int nBody = 1;
	int lvl = 1;
	for (i = 0; i <= 1999; i++) {
		Xbody[i] = 0;
		Ybody[i] = 0;
	}
	Xbody[1] = Xc;
	Ybody[1] = Yc;

	srand(time(NULL));

	cout << "Welcome to the Hamlet Actors Minigame!\nRight now it is Act 2 Scene 2 of this Shakespeare Tragedy\n"
		<< "You, have gone a little bit mad to say the least, and with that you have started bashing the actors\n"
		<< "As well as the fair, Lady Ophelia...\nThe only way for you to get out of this situation is to find Claudius\n"
		<< "\n\nNOW TIME FOR THE GAME!\nYou are the 'H' and you are looking for Claudius 'C'\n"
		<< "This is similar to snake, so follow those rules and you will be fine.\n"
		<< "You must reach a score of 1603 to continue with you quest.\n"
		<< "Good Luck! And as the actors say 'Break a Leg!'\n";
	cin >> e;

		system("CLS");

		//Initialize Game Board
		for (y = ymax - 1; y >= 0; y--) {
			for (x = 0; x < xmax; x++) {
				gameBoard[x][y] = '±';
			}
		}

		//Update Game Board
		for (y = ymax - 2; y >= 1; y--) {
			for (x = 1; x < xmax - 1; x++) {
				gameBoard[x][y] = ' ';
			}
		}

		//Random Food Generator
		Xfood = rand() % 48 + 1;
		Yfood = rand() % 20 + 1;
		gameBoard[Xfood][Yfood] = 'C';

		//Print Game gameBoard
		for (y = ymax - 1; y >= 0; y--) {
			for (x = 0; x < xmax; x++) {
				cout << gameBoard[x][y];
			}
			cout << endl;
		}


		cout << "                    Press <esc> at any time to exit";

		Cursor(Xbody[1], (ymax - 1) - Ybody[1]);
		cout << 'H';
		Cursor(0, 21);

		do {

			Sleep(100);

			if (GetAsyncKeyState(VK_LEFT) && (move != 4)) {
				move = 1;
			}
			else if (GetAsyncKeyState(VK_UP) && (move != 3)) {
				move = 2;
			}
			else if (GetAsyncKeyState(VK_DOWN) && (move != 2)) {
				move = 3;
			}
			else if (GetAsyncKeyState(VK_RIGHT) && (move != 1)) {
				move = 4;
			}
			else if (GetAsyncKeyState(VK_ESCAPE)) {									//Exit program at any time
				dir = 'q';
			}

			//Tail
			for (i = nBody; i >= 1; i--) {
				Xbody[i + 1] = Xbody[i];
				Ybody[i + 1] = Ybody[i];
			}

			//LEFT
			if (move == 1) {
				Xc--;
				Xbody[1] = Xc;
				Ybody[1] = Yc;
			}
			//UP
			else if (move == 2) {
				Yc++;
				Xbody[1] = Xc;
				Ybody[1] = Yc;
			}
			//DOWN
			else if (move == 3) {
				Yc--;
				Xbody[1] = Xc;
				Ybody[1] = Yc;
			}
			//RIGHT
			else if (move == 4) {
				Xc++;
				Xbody[1] = Xc;
				Ybody[1] = Yc;
			}

			//Print the Snake
			Cursor(Xbody[1], (ymax - 1) - Ybody[1]);
			cout << 'H';
			//gameBoard[Xbody[1]][Ybody[1]] = '±';
			Cursor(Xbody[nBody + 1], (ymax - 1) - Ybody[nBody + 1]);
			cout << ' ';
			//gameBoard[Xbody[nBody + 1]][Ybody[nBody + 1]] = ' ';

			//Growing tail & level up
			if (Xc == Xfood && Yc == Yfood) {
				nBody++;
				score += 200;
				//Random Food Generator
				Xfood = rand() % 48 + 1;
				Yfood = rand() % 20 + 1;

				if (gameBoard[Xfood][Yfood] = ' ') {
					gameBoard[Xfood][Yfood] = 'c';
					Cursor(Xfood, (ymax - 1) - Yfood);
					cout << 'c';
				}
			}

			//If snake hits wall program will "GAME OVER"
			if ((gameBoard[Xbody[1]][Ybody[1]] == '±')) {
				score = 1700;
			}

			Cursor(0, 24);
		} while (score <= 1600);

		if (score == 1700) {
			cout << "I am sorry, for you have been slain...\n Hamlet, You did NOT avenge your fathers death :\\\n\n";
			cin >> bye;
			return 0;
		}
		else
			cout << "CONGRATULATIONS HAMLET!!!!!\n Press any key and <enter> to carry on with your story...   ";
		cin >> e;

	return e;
}
