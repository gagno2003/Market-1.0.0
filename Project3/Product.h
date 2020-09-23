#pragma once
#include <string>
#include "Category.h"
#include <SDL.h>
#include <iostream>
#include "Window.h"
using namespace std;
class Product
{
protected:
	double price;
	double mass;
	string name;
	char answer;
	Category category;
public:
	virtual double Getprice();
	virtual double Getmass();
	virtual string Getname();
	virtual Category Getcategory();
};

