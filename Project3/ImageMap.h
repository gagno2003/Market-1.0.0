#pragma once
#include "Forimage.h"
class ImageMap
{
public:
	ImageMap(const char* image1, const char* image2, const char* image3, const char* image4, const char* image5, const char* image6);
	~ImageMap();

	void Draw(SDL_Texture* tex, SDL_Rect src, SDL_Rect dest);
	static SDL_Texture* LoadTexture(const char* texture);
	void LoadMap(int arr[2][3]);
	void DrawMap();

private:
	SDL_Rect src, dest;
	SDL_Texture* img1;
	SDL_Texture* img2;
	SDL_Texture* img3;
	SDL_Texture* img4;
	SDL_Texture* img5;
	SDL_Texture* img6;

	int lvlimages[2][3];
};

