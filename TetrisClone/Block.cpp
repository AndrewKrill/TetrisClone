//Andrew Krill
//2017

#include "Block.h"
#include "Constants.h"
#include "Globals.h"
#include "Tetromino.h"

Block::Block(int x, int y) {
	relX = x;
	relY = y;
}

Block::Block() {

}

Block::~Block() {

}

void Block::Move(int a, int b) {
	gridX += a;
	gridY += b;


}

void Block::Render() {
	SDL_Rect fillRect = { BLOCK_SIZE*gridX, BLOCK_SIZE*gridY, BLOCK_SIZE, BLOCK_SIZE };
	SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
	SDL_RenderFillRect(gRenderer, &fillRect);

	fillRect = { BLOCK_SIZE * gridX + 10, BLOCK_SIZE * gridY + 10, BLOCK_SIZE / 2, BLOCK_SIZE / 2 };
	SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderFillRect(gRenderer, &fillRect);

	SDL_RenderPresent(gRenderer);
	SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0x00);
	SDL_RenderClear(gRenderer);
}