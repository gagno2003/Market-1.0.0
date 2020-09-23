#pragma once
#include "Add.h"
#include <vector>
class Card
{
protected:
	int size;
	double* newprice = new double[size];
	string cardname;
public:
	virtual double *Getnewprice();
	virtual string Getcardname();
};

