//Andrew Krill
//2017

#ifndef _PLAYER
#define _PLAYER

#include "Tetromino.h"
#include "Grid.h"
#include "Constants.h"
#include <iostream>

class Player {
private:
	int score;
	int nextMove = 0;
	Tetromino *currentPiece = NULL;
public:
	Player();
	void inputs();
	int getScore();
	Tetromino* getCurrentPiece();
	void setCurrentPiece(Tetromino *currentPiece);
	void move();
	void createPiece();
	bool needsNewPiece();
};



#endif
