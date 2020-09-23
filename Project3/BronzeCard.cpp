#include "BronzeCard.h"

BronzeCard::BronzeCard(string Cname, vector<Add>add)
{
	cardname = Cname;
	for (size_t i = 0; i < add.size(); i++)
	{
		newprice[i] = (add[i].Getprice() / 100) * 90;
	}
}


string BronzeCard::Getcardname()
{
	return cardname;
}

double *BronzeCard::Getnewprice()
{
	return newprice;
}









