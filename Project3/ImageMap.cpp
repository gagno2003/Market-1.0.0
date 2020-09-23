#include "ImageMap.h"

int lvl[2][3] = {

	{0,1,2},
	{3,4,5}
};

ImageMap::ImageMap(const char* image1, const char* image2, const char* image3, const char* image4, const char* image5, const char* image6)
{
	img1 = LoadTexture(image1);
	img2 = LoadTexture(image2);
	img3 = LoadTexture(image3);
	img4 = LoadTexture(image4);
	img5 = LoadTexture(image5);
	img6 = LoadTexture(image6);
	LoadMap(lvl);

	src.x = src.y = 0;
	src.w = dest.w = 150;
	src.h = dest.h = 150;
	dest.x = dest.y = 0;
}

ImageMap::~ImageMap()
{
}

void ImageMap::Draw(SDL_Texture* tex, SDL_Rect src, SDL_Rect dest)
{
	SDL_RenderCopy(Forimage::renderer, tex, &src, &dest);
}

SDL_Texture* ImageMap::LoadTexture(const char* texture)
{
	SDL_Surface* tempsurface = IMG_Load(texture);
	SDL_Texture* tex = SDL_CreateTextureFromSurface(Forimage::renderer, tempsurface);
	SDL_FreeSurface(tempsurface);

	return tex;
}

void ImageMap::LoadMap(int arr[2][3])
{
	for (int row = 0; row < 2; row++)
	{
		for (int column = 0; column < 3; column++)
		{
			lvlimages[row][column] = arr[row][column];
		}
	}
}

void ImageMap::DrawMap()
{
	int type = 0;
	for (int row = 0; row < 2; row++)
	{
		for (int column = 0; column < 3; column++)
		{
			type = lvlimages[row][column];

			dest.x = column * 150;
			dest.y = row * 150;

			switch (type)
			{
			case 0:
				Draw(img1, src, dest);
				break;
			case 1:
				Draw(img2, src, dest);
				break;
			case 2:
				Draw(img3, src, dest);
				break;
			case 3:
				Draw(img4, src, dest);
				break;
			case 4:
				Draw(img5, src, dest);
				break;
			case 5:
				Draw(img6, src, dest);
				break;
			default:
				break;
			}
		}
	}
}
