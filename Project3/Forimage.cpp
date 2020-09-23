#include "Forimage.h"
#include "ImageMap.h"

ImageMap* map;
SDL_Renderer* Forimage::renderer = nullptr;
SDL_Window* Forimage::window = nullptr;

Forimage::Forimage()
{

}

Forimage::~Forimage()
{
}

void Forimage::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen, const char* image1, const char* image2, const char* image3, const char* image4, const char* image5, const char* image6)
{
	int flags = 0;
	if (fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		}
	}
	map = new ImageMap(image1, image2, image3, image4, image5, image6);
}




void Forimage::render()
{
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, texture, NULL, NULL);
	map->DrawMap();
	SDL_RenderPresent(renderer);
}



