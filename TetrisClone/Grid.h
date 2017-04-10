//Andrew Krill
//2017


#ifndef _GRID
#define _GRID

#include "Block.h"
#include "Tetromino.h"
#include "Constants.h"
#include <iostream>

class Grid {
private:
	Block *blocksGrid[10][20];
	Block *blocksToAdd[4];
	Tetromino currentPiece;
	int xOffset;
	int yOffset;
public:

	Grid();
	void addBlock(Block &added);
	void testShowGrid();
	void addTetromino();
	void render();
	bool isCollision(int x, int y);
};

#endif