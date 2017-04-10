//Andrew Krill
//2017


#ifndef _BLOCK
#define _BLOCK

#include "Constants.h"
#include "Globals.h"
#include "Block.h"

using namespace std;

class Block {
private:
	int relX;
	int relY;
	int gridX;
	int gridY;

public:

	Block(int, int, int, int);
	Block();
	~Block();
	void render();
	void move(int a, int b);
	int getX();
	int getY();
};



#endif