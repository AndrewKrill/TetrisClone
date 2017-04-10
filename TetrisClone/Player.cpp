//Andrew Krill
//2017


#include "Player.h"

using namespace std;

Player::Player() {
	int score = 0;
	int nextMove = 0;
}

void Player::inputs() {
	nextMove = 0;
	const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
	if (currentKeyStates[SDL_SCANCODE_UP]) {
		nextMove = 4;
	}
	else if (currentKeyStates[SDL_SCANCODE_DOWN]) {
		nextMove = 2;
	}
	else if (currentKeyStates[SDL_SCANCODE_RIGHT]) {
		nextMove = 3;
	}
	else if (currentKeyStates[SDL_SCANCODE_LEFT]) {
		nextMove = 1;
	}
}

void Player::move() {
	if (currentPiece != NULL) {
		currentPiece->move(nextMove);
		nextMove = 0;
	}

}

void Player::createPiece() {
	
}

void Player::setCurrentPiece(Tetromino *currentPiece) {
	this->currentPiece = currentPiece;
	cout << "set current piece \n";
	cout << currentPiece;
}

Tetromino* Player::getCurrentPiece() {
	return currentPiece;
}

bool Player::needsNewPiece() {
	if (currentPiece == NULL) {
		return true;
	}
	return false;
}