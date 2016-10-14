#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int Theater_Game() {

	char board[60][23];
	int a, b, x, y, k, e, p, ch;

	x = 3;
	y = 3;
	e = 50;
	p = 17;

	//Board Specifications
	for (a = 0; a <= 59; a++) {
		for (b = 0; b <= 22; b++) {
			board[a][b] = ' ';
		}
	}

	for (a = 0; a <= 59; a++) {
		board[a][0] = '*';
		board[a][22] = '*';
	}

	for (b = 0; b <= 22; b++) {
		board[0][b] = '*';
		board[59][b] = '*';
	}

	board[43][19] = '8';
	board[x][y] = 'M';
	/*
	if (go) {
		//Level 1 Map
		for (a = 1; a <= 22; a++) {
			board[a][2] = '-';
			board[a][4] = '-';
		}

		for (a = 23; a <= 39; a++) {
			board[a][19] = '-';
		}

		for (a = 22; a <= 26; a++) {
			board[a][2] = '-';
		}

		for (a = 27; a <= 49; a++) {
			board[a][12] = '-';
		}

		for (b = 4; b <= 12; b++) {
			board[23][b] = '|';
			board[26][b] = '|';
		}

		for (b = 13; b <= 19; b++) {
			board[23][b] = '|';
		}

		for (b = 4; b >= 2; b--) {
			board[26][b] = '|';
		}

		for (b = 18; b >= 15; b--) {
			board[39][b] = '|';
		}

		for (b = 13; b <= 16; b++) {
			board[50][b] = '|';
		}

		for (a = 40; a <= 44; a++) {
			board[a][40] = '^';
			board[a][44] = '^';
		}

		for (a = 2; a <= 19; a++) {
			board[a][2] = '-';
			board[a][4] = '-';
		}


		board[43][19] = '8';
		board[x][y] = 'M';


		for (k = 0; k <= 1000; k++) {


			//Print the Board
			xy(0, 0);
			for (b = 22; b >= 0; b--) {
				for (a = 0; a <= 59; a++) {
					cout << board[a][b];
				}
				cout << endl;
			}

			key = _getch();
			cout << endl;

			//Player Moves (LV. 1)
			if ((key == 'w') && ((board[x][y + 1] == ' ') || (board[x][y + 1] == '8'))) {
				if (board[x][y + 1] == '8') {
					board[x][y] = ' ';
					y++;
					board[x][y] = 'M';
					for (b = 22; b >= 0; b--) {
						for (a = 0; a <= 59; a++) {
							cout << board[a][b];
						}
						cout << endl;
					}
					break;
				}
				board[x][y] = ' ';
				y++;
				board[x][y] = 'M';
			}
			else if ((key == 's') && (board[x][y - 1] == ' ') || (board[x][y + 1] == '8')) {
				board[x][y] = ' ';
				y--;
				board[x][y] = 'M';
			}
			else if ((key == 'a') && (board[x - 1][y] == ' ') || (board[x][y + 1] == '8')) {
				board[x][y] = ' ';
				x--;
				board[x][y] = 'M';
			}
			else if ((key == 'd') && (board[x + 1][y] == ' ') || (board[x][y + 1] == '8')) {
				board[x][y] = ' ';
				x++;
				board[x][y] = 'M';
			}

		}
	}*/
return 0;
}