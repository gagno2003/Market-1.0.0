#include "Prints.h"


void Prints::PrintClients (Add add, Card card)
{
	cout << add.Getname() << "[Mass: " << add.Getmass();

	if (add.Getcategory() == Category::Food)
	{
		cout << "Kg";
	}
	else
	{
		cout << "L";
	}

	cout << " Price: " << add.Getprice() << "$ Category: ";

	if (add.Getcategory() == Category::Food)
	{
		cout << "Food ";
	}
	else
	{
		cout << "Drink ";
	}

	cout << "Card: " << card.Getcardname() << " New price: " << card.Getnewprice() << "$]" << endl;
}

void Prints::PrintNames(Add add)
{
	cout << "Name: " << add.Getname() << " Price: " << add.Getprice() << endl;
}

void Prints::PrintCards(Card card)
{
	cout << "Name: " << card.Getcardname() << endl;
}

