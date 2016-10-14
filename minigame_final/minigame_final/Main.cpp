#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;


void xy(int x, int y) {
	COORD cord;
	cord.X = x;
	cord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}

int main() {

	char board[60][23];
	int a, b;
	char e;
	char move;

	int x = 3;
	int y = 15;
	int m = 5;
	int n = 17;

	cout << "Hamlet, your time has come\nTime to avenge your father's death!\n"
		<< "Everything you have done has led you to this point.\n"
		<< "You have had many choices along the way\nYour decisions have got you here\n"
		<< "It is now your turn to take charge!\nYou have a plan and ther is nothing stopping you now!!\n"
		<< "NOW IS THE TIME TO SET OFF AND KILL CLAUDIUS!!!!!\n\n"
		<< "So what are you waiting for Hamlet? Press any key and <enter> to finish this adventure...";
	cin >> e;

	system("CLS");

	//Board Outline Specs
	for (a = 0; a <= 59; a++) {
		for (b = 0; b <= 22; b++) {
			board[a][b] = ' ';
		}
	}
	//Vertical
	for (a = 0; a <= 59; a++) {
		board[a][0] = '&';
		board[a][22] = '&';
	}
	//Horizontal
	for (b = 0; b <= 22; b++) {
		board[0][b] = '&';
		board[59][b] = '&';
	}
	board[x][y] = 'H';

	//Opening
	if (e) {
		board[53][7] = ']';
	}
	for (int k = 0; k <= 10000; k++) {
		//Print Board Outline
		xy(0, 0);
		for (b = 22; b >= 0; b--) {
			for (a = 0; a <= 59; a++) {
				cout << board[a][b];
			}
			cout << endl;
		}

		move = _getch();
		cout << endl;
		//Moving
		if ((move == 'w' || (GetAsyncKeyState(VK_UP))) && (board[x][y + 1] == ' ')) {
			board[x][y] = ' ';
			y++;
			board[x][y] = 'H';
			//QUEEN
			if (board[m][n] == 'Q') {
				if (m <= 12) {
					board[m][n] = ' ';
					m++;
					if (n >= 5) {
						n--;
					}
					board[m][n] = 'Q';
				}
				if (board[13][9] == 'Q') {
					board[13][9] = ' ';
					board[13][9] = 'w';
					xy(0, 24);
					cout << "THAT WINE WAS POISONED HAMLET!! Claudius advised agaist her drinking\n"
						<< "But she did and states ~I will, my lord. I pray you, pardon me~\n"
						<< "The queen has been slain...";
				}
			}
			if (board[x][y + 1] == 'C') {
				board[5][18] = ' ';
				xy(0, 24);
				cout << "Congratulations Hamlet! You have slain Claudius! You have avenged your father's death\n"
					<< "BUT WAIT! Alas you are not finished yet! Laertes comes out of nowhere ready to strike!\n"
					<< "                           ";
				board[50][7] = 'L';
			}
		}
		else if ((move == 's' || (GetAsyncKeyState(VK_DOWN))) && (board[x][y - 1] == ' ')) {
			board[x][y] = ' ';
			y--;
			board[x][y] = 'H';
			//QUEEN
			if (board[m][n] == 'Q') {
				if (m <= 12) {
					board[m][n] = ' ';
					m++;
					if (n >= 5) {
						n--;
					}
					board[m][n] = 'Q';
				}
				if (board[13][9] == 'Q') {
					board[13][9] = ' ';
					board[13][9] = 'w';
					xy(0, 24);
					cout << "THAT WINE WAS POISONED HAMLET!! Claudius advised agaist her drinking\n"
						<< "But she did and states ~I will, my lord. I pray you, pardon me~\n"
						<< "The queen has been slain...";
				}
			}
			if (board[x][y - 1] == 'C') {
				board[5][18] = ' ';
				xy(0, 24);
				cout << "Congratulations Hamlet! You have slain Claudius! You have avenged your father's death\n"
					<< "BUT WAIT! Alas you are not finished yet! Laertes comes out of nowhere ready to strike!\n"
					<< "                           ";
				board[50][7] = 'L';
			}
		}
		else if ((move == 'a' || (GetAsyncKeyState(VK_LEFT))) && (board[x - 1][y] == ' ')) {
			board[x][y] = ' ';
			x--;
			board[x][y] = 'H';
			//QUEEN
			if (board[m][n] == 'Q') {
				if (m <= 12) {
					board[m][n] = ' ';
					m++;
					if (n >= 5) {
						n--;
					}
					board[m][n] = 'Q';
				}
				if (board[13][9] == 'Q') {
					board[13][9] = ' ';
					board[13][9] = 'w';
					xy(0, 24);
					cout << "THAT WINE WAS POISONED HAMLET!! Claudius advised agaist her drinking\n"
						<< "But she did and states ~I will, my lord. I pray you, pardon me~\n"
						<< "The queen has been slain...";
				}
			}
			if (board[x - 1][y] == 'C') {
				board[5][18] = ' ';
				xy(0, 24);
				cout << "Congratulations Hamlet! You have slain Claudius! You have avenged your father's death\n"
					<< "BUT WAIT! Alas you are not finished yet! Laertes comes out of nowhere ready to strike!\n"
					<< "                           ";
				board[50][7] = 'L';
			}
		}
		else if ((move == 'd' || (GetAsyncKeyState(VK_RIGHT))) && (board[x + 1][y] == ' ')) {
			board[x][y] = ' ';
			x++;
			board[x][y] = 'H';
			//QUEEN
			if (board[m][n] == 'Q') {
				if (m <= 12) {
					board[m][n] = ' ';
					m++;
					if (n >= 5) {
						n--;
					}
					board[m][n] = 'Q';
				}
				if (board[13][9] == 'Q') {
					board[13][9] = ' ';
					board[13][9] = 'w';
					xy(0, 24);
					cout << "THAT WINE WAS POISONED HAMLET!! Claudius advised agaist her drinking\n"
						<< "But she did and states ~I will, my lord. I pray you, pardon me~\n"
						<< "The queen has been slain...";
				}
			}
			if (board[x + 1][y] == 'C') {
				board[5][18] = ' ';
				xy(0, 24);
				cout << "Congratulations Hamlet! You have slain Claudius! You have avenged your father's death\n"
					<< "BUT WAIT! Alas you are not finished yet! Laertes comes out of nowhere ready to strike!\n"
					<< "                           ";
				board[50][7] = 'L';
			}
		}
		
		//KING
		if (board[x + 1][y] == ']') {
			system("CLS");
			xy(0, 24);
			cout << "Now is your chance Hamlet! Time to avenge your father's death!\nYou have the poison dipped sword. You must slay the king.";
			//Board Specs
			board[5][18] = 'C';
			board[m][n] = 'Q';
			board[13][9] = 'w';
			//Print Board Outline
			xy(0, 0);
			for (b = 22; b >= 0; b--) {
				for (a = 0; a <= 59; a++) {
					cout << board[a][b];
				}
				cout << endl;
			}
		}
	}
	

	return 0;
}