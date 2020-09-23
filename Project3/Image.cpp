#include "Image.h"

Forimage* forimage = nullptr;

Image::Image(const char* image1, const char* image2, const char* image3, const char* image4, const char* image5, const char* image6)
{
	forimage = new Forimage();
	forimage->init("test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 450, 300, false, image1, image2, image3, image4, image5, image6);
	forimage->render();
}

