#include "Player.h"
#include <iostream>
#include "matrix.h"
#include <iostream>

Player::Player() {
	x = 1;
	y = 0;
};

void Player::update(int &newx, int &newy) {

	if (table[newy][newx] == 0) {
		x = newx;
		y = newy;
	} else if (table[newy][newx] == 2) {
		x = newx;
		y = newy;
		std::cout << "You WIN!!!!\n";
	}
	else {
		newx = x;
		newy = y;
	}
	
};

