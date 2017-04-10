//Andrew Krill
//2017

#include "Grid.h"
#include "Constants.h"
#include <iostream>
#include "Player.h"
#include "GameInstance.h"

using namespace std;

GameInstance::GameInstance() {
	Player *P1 = new Player;
	Grid *G1 = new Grid;
	Tetromino *tetrominoBag[256] = { NULL };
}

GameInstance::~GameInstance() {
	delete &P1;
	delete &G1;
}

void GameInstance::inputs() {
	P1.inputs();
}

void GameInstance::logic() {

	Tetromino *temp = new Tetromino();
	addTetromino(temp);
		//if necessary
	move();
		//checks for collision, moves piece which moves blocks, deletes tetromino

	//Check for finished rows
	

	//Check for pieces too high
}

void GameInstance::render() {
	G1.render();

	//render via tetrominos
	for (int i = 0; i < 256; i++) {
		if (tetrominoBag[i] != NULL) {
			tetrominoBag[i]->render();
		}
	}


}

void GameInstance::move() {
	P1.move();
}

int GameInstance::findTetrominoSpot() {
	for (int i = 0; i < 256; i++) {
		if (tetrominoBag[i] == NULL) {
			return i;
		}
	}
	return -1;
}

void GameInstance::addTetromino(Tetromino *toAdd) {
	if (P1.needsNewPiece()) {
		int i = findTetrominoSpot();
		tetrominoBag[i] = toAdd;
		P1.setCurrentPiece(tetrominoBag[i]);
	}
	else {
		delete toAdd;
	}

}