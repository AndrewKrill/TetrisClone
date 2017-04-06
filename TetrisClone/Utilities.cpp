//Andrew Krill
//2017

#include <iostream>
#include "Utilities_SDL.h"
#include "Globals.h"
#include "Constants.h"
#include "Tetromino.h"

void initialize() {
	run = true;

	window = NULL;
	screenSurface = NULL;
	gRenderer = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		printf("SDL could not initialize! SDL Error: %s\n", SDL_GetError());
	}
	else {
		window = SDL_CreateWindow("Tetris", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL) {
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		}
		else {
			screenSurface = SDL_GetWindowSurface(window);
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
			SDL_UpdateWindowSurface(window);
		}
	}
	gRenderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);


}

void uninitialize() {
	SDL_DestroyWindow(window);
	SDL_Quit();
}