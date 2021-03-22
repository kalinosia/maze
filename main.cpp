#include <iostream>
#include <math.h> //??
#include <conio.h> //getch()
#include < stdlib.h > //cls
#include <Windows.h> //to get winuser
#include <Winuser.h> //https://docs.microsoft.com/pl-pl/windows/win32/inputdev/virtual-key-codes?redirectedfrom=MSDN

#include "Player.h"
#include "Board.h"
#include "matrix.h"

using namespace std;



int main() {
	Board board;
	Player player;
	int newx = player.x;
	int newy = player.y;

	while (true) {

	//std::cout << "xnew= " << newx << ", newy= " << newy << "\n";
	//std::cout << "table[x][y]= " << table[newy][newx] << "\n";

	player.update(newx, newy);
	board.update(player.x, player.y);
	
	//std::cout << "x= " << player.x << ", y= " << player.y << "\n";
	//std::cout << "table[x][y]= " << table[player.y][player.x] << "\n";
	
	

	if (GetKeyState(VK_ESCAPE) & 0x8000/*Check if high-order bit is set (1 << 15)*/) break;
	//if (GetKeyState(VK_LEFT) & 0x8000) cout << "LEFT"<<endl; //add before state
	//if (GetKeyState(VK_UP) & 0x80000) cout << "UP" << endl;
	//if (GetKeyState(VK_RIGHT) & 0x8000) cout<<"Right\n";
	//if (GetKeyState(VK_DOWN) & 0x8000) cout << "Down\n";
	//if (GetKeyState(VK_DOWN) & 0x8000) cout << "Down i up\n";
	
	
	switch (_getch()) {
	case 72:
		cout << endl << "Up" << endl;//key up
		newy = player.y - 1;
		break;
	case 80:
		cout << endl << "Down" << endl;   // key down
		newy = player.y + 1;
		break;
	case 77:
		cout << endl << "Right" << endl;  // key right
		newx = player.x + 1;
		break;
	case 75:
		cout << endl << "Left" << endl;  // key left
		newx = player.x - 1;
		break;
	default:
		//cout << endl << "null" << endl;  // not arrow
		break;
	}
	system("CLS");
		
}
	

	return 0;
}