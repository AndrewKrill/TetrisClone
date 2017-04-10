//Andrew Krill
//2017


#include <iostream>
#include "Tetromino.h"
#include "Constants.h"
#include "Utilities_SDL.h"
#include "Globals.h"
#include <SDL.h>
#include "Grid.h"
#include "GameInstance.h"

using namespace std;

int main( int argc, char* args[]) {



	initialize();

	GameInstance Game = GameInstance();


	//Game Loop
	while(run == true) {
		//Inputs
		while (SDL_PollEvent(&e) != 0) {
			if (e.type == SDL_QUIT) {
				run = false;
			}
		}

		//Keyboard Inputs
		Game.inputs();

		//Logic
		Game.logic();

		//Render
		Game.render();

		//Delay
		SDL_Delay(100);
		

	}

	uninitialize();

	return 0;
}