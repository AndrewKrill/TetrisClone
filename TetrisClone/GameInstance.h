//Andrew Krill
//2017

#ifndef _GAME_INSTANCE
#define _GAME_INSTANCE

#include "Tetromino.h"
#include "Player.h"

class GameInstance {
private:
	Tetromino *tetrominoBag[256];
	Player P1;
	Grid G1;

public:
	GameInstance();
	~GameInstance();
	void inputs();
	void logic();
	void render();
	void move();
	void addTetromino(Tetromino*);
	int findTetrominoSpot();



};


#endif
