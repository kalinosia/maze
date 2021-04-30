#include <iostream>

#include "Board.h"
#include "Player.h"
#include "matrix.h"

using namespace std;



void Board::update(int x, int y) {

	for (int i = 0; i < sizeof table / sizeof table[0]; i++) {
		for (int j = 0; j < sizeof table[0] / sizeof(int); j++) {
			if ((i == y) && (j == x) && (table[i][j] == 2)) cout << char(254);
			else if ((i == y) && (j == x)) cout << char(219);
			else if (table[i][j] == 1) cout << char(178);
			else if (table[i][j] == 0) cout << char(176);
			else if (table[i][j] == 2) cout << char(176);
			else cout << "Stop, something wrong!";
			
			
			
		}
		cout << endl;
	}
	cout << endl;
}