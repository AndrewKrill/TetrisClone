//Andrew Krill
//2017


#ifndef _BLOCK
#define _BLOCK

#include "Constants.h"
#include "Globals.h"
#include "Block.h"

class Block {
private:
	int relX;
	int relY;
	int gridX;
	int gridY;

public:

	Block(int x, int y);
	Block();
	~Block();
	void Render();
	void Move(int a, int b);
};



#endif