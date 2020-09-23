#include "Goldcard.h"

GoldCard::GoldCard(string Cname, vector<Add>add)
{
	cardname = Cname;
	for (size_t i = 0; i < add.size(); i++)
	{
		newprice[i] = (add[i].Getprice() / 100) * 50;
	}
}


string GoldCard::Getcardname()
{
	return cardname;
}

double* GoldCard::Getnewprice()
{
		return newprice;
}


