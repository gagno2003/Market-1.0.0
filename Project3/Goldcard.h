#pragma once
#include "Card.h"
#include "Fornewprice.h"
class GoldCard :
	public Card
{
public:
	GoldCard(string Cname, vector<Add>add);
	string Getcardname()override;
	double *Getnewprice()override;
};
