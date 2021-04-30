#pragma once
class Player
{
public:
	int x, y;
	Player();
private:
	bool win = false;
public:
	void update(int &newx, int &newy);
	void ifwin();
	
};

