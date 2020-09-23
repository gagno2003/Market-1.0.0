#include "Addnocategory.h"

Addnocategory::Addnocategory(string Aname, double Amass, double Aprice)
{
	name = Aname;
	mass = Amass;
	price = Aprice;
}


string Addnocategory::Getname()
{
	return name;
}

double Addnocategory::Getmass()
{
	return mass;
}

double Addnocategory::Getprice()
{
	return price;
}
