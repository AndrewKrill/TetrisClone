//Andrew Krill
//2017

#include "Block.h"
#include "Constants.h"
#include "Globals.h"
#include "Tetromino.h"
#include <iostream>



Block::Block(int relX, int relY, int gridX, int gridY) {
	this->relX = relX;
	this->relY = relY;
	this->gridX = gridX;
	this->gridY = gridY;
}

Block::Block() {

}

Block::~Block() {

}

int Block::getX() {
	return gridX;
}

int Block::getY() {
	return gridY;
}

void Block::move(int a, int b) {

//	cout << gridX << " " << gridY << "\n";
	if (gridX + a <= 20 && gridX + a >= 0) {
		gridX += a;
		cout << gridX << "\n";
	}
	if (gridY + b <= 20 && gridY + b >= 0) {
		gridY += b;
		cout << gridY << "\n";
	}
}

void Block::render() {
	SDL_Rect fillRect = { BLOCK_SIZE*gridX, BLOCK_SIZE*gridY, BLOCK_SIZE, BLOCK_SIZE };
	SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
	SDL_RenderFillRect(gRenderer, &fillRect);

	fillRect = { BLOCK_SIZE * gridX + BLOCK_SIZE / 8, BLOCK_SIZE * gridY + BLOCK_SIZE / 8, 3*BLOCK_SIZE / 4, 3*BLOCK_SIZE / 4 };
	SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0x00, 0x00);
	SDL_RenderFillRect(gRenderer, &fillRect);

	SDL_RenderPresent(gRenderer);
	SDL_SetRenderDrawColor(gRenderer, 0x00, 0x99, 0x99, 0xFF);
	SDL_RenderClear(gRenderer);
}