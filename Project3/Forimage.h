#define SDL_MAIN_HANDLED
#pragma once
#include <iostream>
using namespace std;
#include <SDL.h>
#include <SDL_image.h>
#include "ImageMap.h"
class Forimage
{
public:
	Forimage();
	~Forimage();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen, const char* image1, const char* image2, const char* image3, const char* image4, const char* image5, const char* image6);

	void render();

	static SDL_Renderer* renderer;
	static SDL_Window* window;

private:
	SDL_Texture* texture;
};
