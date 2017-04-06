//Andrew Krill
//2017

#include "Tetromino.h"
#include "Globals.h"
#include "Constants.h"
#include "Block.h"



Tetromino::Tetromino(int x, int y, int type) {
	this->gridX = x;
	this->gridY = y;
	this->type = type;

	Block *kids[4];

	for (int i = 0; i < 4; i++) {
		kids[i] = &Block(x+i,y);
	}

}

Tetromino::Tetromino() {
}

void Tetromino::render() {


}

void Tetromino::move(int a, int b) {
	gridX += a;
	gridY += b;


}