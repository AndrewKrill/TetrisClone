//Andrew Krill
//2017

#include <SDL.h>

#ifndef CONSTANTS_H
#define CONSTANTS_H

//The screen attributes

const int GRID_WIDTH = 10;
const int GRID_HEIGHT = 20;
const int BLOCK_SIZE = 40;

const int SCREEN_WIDTH = (GRID_WIDTH + 8) * BLOCK_SIZE;
const int SCREEN_HEIGHT = (GRID_HEIGHT) * BLOCK_SIZE;


//The frame rate
const int FRAMES_PER_SECOND = 20;
#endif