#include "SilverCard.h"

SilverCard::SilverCard(string Cname, vector<Add>add)
{
	cardname = Cname;
	for (size_t i = 0; i < add.size(); i++)
	{
		newprice[i] = (add[i].Getprice() / 100) * 70;
	}
}

string SilverCard::Getcardname()
{
	return cardname;
}

double* SilverCard::Getnewprice()
{
	return newprice;
}



