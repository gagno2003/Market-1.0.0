#pragma once
#include "Product.h"
class Addnocategory :
	public Product
{
public:
	Addnocategory(string Aname, double Amass, double Aprice);

	string Getname()override;
	double Getmass()override;
	double Getprice()override;
};

