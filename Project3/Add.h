#pragma once
#include "Product.h"
#include "Category.h"
#include <SDL.h>
#include <iostream>
#include "Card.h"
#include "SDL_image.h"
#include "Window.h"
#include "Forimage.h"
#include "ImageMap.h"
class Add :
	public Product
{
public:
	Add(string Aname, double Amass, double Aprice, Category category);

	string Getname()override;
	double Getmass()override;
	double Getprice()override;
	Category Getcategory()override;
};

