#include "Add.h"


Add::Add(string Aname, double Amass, double Aprice, Category Acategory)
{
	name = Aname;
	mass = Amass;
	price = Aprice;
	category = Acategory;
}


string Add::Getname()
{
	return name;
}

double Add::Getmass()
{
	return mass;
}

double Add::Getprice()
{
	return price;
}

Category Add::Getcategory()
{
	return category;
}



