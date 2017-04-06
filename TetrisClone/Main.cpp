//Andrew Krill
//2017


#include <iostream>
#include "Tetromino.h"
#include "Constants.h"
#include "Utilities_SDL.h"
#include "Globals.h"
#include <SDL.h>


using namespace std;

Block A = Block(1, 3);

int main( int argc, char* args[]) {

	initialize();
	bool pressed = false;

	//Game Loop
	while(run == true) {
		//Inputs

		while (SDL_PollEvent(&e) != 0) {
			if (e.type == SDL_QUIT) {
				run = false;
			}
		}

		//Keyboard Inputs
		const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
		if (currentKeyStates[SDL_SCANCODE_UP]) {
			if (!pressed) {
				A.Move(0,-1);
			}
			pressed = true;
		}
		else if (currentKeyStates[SDL_SCANCODE_DOWN]) {
			if (!pressed) {
				A.Move(0,1);
			}
			pressed = true;
		}
		else if (currentKeyStates[SDL_SCANCODE_RIGHT]) {
			if (!pressed) {
				A.Move(1, 0);
			}
			pressed = true;
		}
		else if (currentKeyStates[SDL_SCANCODE_LEFT]) {
			if (!pressed) {
				A.Move(-1, 0);
			}
			pressed = true;
		}
		else {
			pressed = false;
		}

		//Logic
		

		//Render
		A.Render();
		
		

	}

	uninitialize();

	return 0;
}