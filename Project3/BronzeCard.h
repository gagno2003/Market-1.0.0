#pragma once
#include "Card.h"
class BronzeCard :
	public Card
{
public:
	BronzeCard(string Cname, vector<Add>add);
	string Getcardname()override;
	double* Getnewprice()override;
};

