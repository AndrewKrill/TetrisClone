//Andrew Krill
//2017

#include "Grid.h"


using namespace std;

Grid::Grid() {
	Block *blocksGrid[10][20] = { NULL };
	Block *blocksToAdd[4] = { NULL };
	Tetromino *currentPiece = NULL;
}

void Grid::addBlock(Block &added) {
	int blockX = added.getX();
	int blockY = added.getY();
	blocksGrid[blockX][blockY] = &added;
}

void Grid::testShowGrid() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			if (blocksGrid[i][j] != NULL) {
				int x = blocksGrid[i][j]->getX();
				int y = blocksGrid[i][j]->getY();
				printf("%d, %d, %d, %d \n",i, j, x, y);
				SDL_Delay(100);
			}
		}
	}
}

bool Grid::isCollision(int x, int y) {
	if (blocksGrid[x][y] != NULL) {
		return true;
	}
	return false;
}

void Grid::render() {

	//Top
	for (int i = 0; i < 12; i++) {
		SDL_Rect fillRect = { BLOCK_SIZE*(i + X_OFFSET), BLOCK_SIZE*(-1 + Y_OFFSET), BLOCK_SIZE, BLOCK_SIZE };
		SDL_SetRenderDrawColor(gRenderer, 0x66, 0x66, 0x66, 0xFF);
		SDL_RenderFillRect(gRenderer, &fillRect);
	}

	//LEFT
	for (int i = 0; i < 21; i++) {
		SDL_Rect fillRect = { BLOCK_SIZE*(0 +  X_OFFSET), BLOCK_SIZE*(i + Y_OFFSET), BLOCK_SIZE, BLOCK_SIZE };
		SDL_SetRenderDrawColor(gRenderer, 0x66, 0x66, 0x66, 0xFF);
		SDL_RenderFillRect(gRenderer, &fillRect);
	}

	//RIGHT
	for (int i = 0; i < 21; i++) {
		SDL_Rect fillRect = { BLOCK_SIZE*(11 + X_OFFSET), BLOCK_SIZE*(i + Y_OFFSET), BLOCK_SIZE, BLOCK_SIZE };
		SDL_SetRenderDrawColor(gRenderer, 0x66, 0x66, 0x66, 0xFF);
		SDL_RenderFillRect(gRenderer, &fillRect);
	}
	//BOTTOM
	for (int i = 0; i < 10; i++) {
		SDL_Rect fillRect = { BLOCK_SIZE*(1 + i + X_OFFSET), BLOCK_SIZE*(20 + Y_OFFSET), BLOCK_SIZE, BLOCK_SIZE };
		SDL_SetRenderDrawColor(gRenderer, 0x66, 0x66, 0x66, 0xFF);
		SDL_RenderFillRect(gRenderer, &fillRect);
	}
	//MIDDLE
		SDL_Rect fillRect = { BLOCK_SIZE*(1 + X_OFFSET), BLOCK_SIZE*(0 + Y_OFFSET), BLOCK_SIZE*10, BLOCK_SIZE*20 };
		SDL_SetRenderDrawColor(gRenderer, 0x33, 0x33, 0x33, 0xFF);
		SDL_RenderFillRect(gRenderer, &fillRect);

		SDL_RenderPresent(gRenderer);
	//BLOCKS
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 20; j++) {
				if (blocksGrid[i][j] != NULL) {
					blocksGrid[i][j]->render();
				}
			}
		}
}

