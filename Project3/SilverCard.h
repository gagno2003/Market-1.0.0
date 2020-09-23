#pragma once
#include "Card.h"
#include "Add.h"
#include "Fornewprice.h"
class SilverCard :
	public Card
{
public:
	SilverCard(string Cname, vector<Add>add);
	string Getcardname()override;
	double* Getnewprice()override;
};

