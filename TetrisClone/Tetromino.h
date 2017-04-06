//Andrew Krill
//2017


#ifndef _TETROMINO
#define _TETROMINO
#include <SDL.h>
#include "Block.h"
#include "Tetromino.h"



class Tetromino {
	private:
		int gridX, gridY, type;
		bool inPlay;
		Block *A[4];
	public:

		//Creates piece
		Tetromino(int, int, int);

		Tetromino::Tetromino();

		void move(int a, int b);

		void dissociate();

		void render();
};

#endif 
