#include "Libraries.h"
#include <SDL_image.h>
#include "Image.h"

int main(int argc, char* argv[]) {

	File file;
	Chooses choose;
	vector<Add>Addvector;
	vector<Card>Cardvector;

	cout << "Do you want to see the last pay?" << endl;
	cout << "y/n" << endl;
	char yn;
	cin >> yn;
	choose.Choose2(yn, file);

	Add Client1("Cocacola", 2, 3, Category::Drink);
	Add Client2("Fanta", 1.5, 2.4, Category::Drink);
	Add Client3("Pizza", 0.2, 10, Category::Food);
	Add Client4("Bread", 0.1, 2, Category::Food);
	Add Client5("Fish", 0.5, 12, Category::Food);
	Add Client6("Egg", 0.1, 0.3, Category::Food);

	const char* image1 = "Products/cola.png";
	const char* image2 = "Products/fanta.png";
	const char* image3 = "Products/egg.png";
	const char* image4 = "Products/bread.png";
	const char* image5 = "Products/fish.png";
	const char* image6 = "Products/pizza.png";

	Image image(image1, image2, image3, image4, image5, image6);

	cout << endl;
	cout << endl;
	cout << "<----------------------------------------->" << endl;
	cout << endl;
	cout << endl;

	Prints printer;
	cout << "Our product!" << endl;
	cout << "1)"; printer.PrintNames(Client1);
	cout << "2)"; printer.PrintNames(Client2);
	cout << "3)"; printer.PrintNames(Client3);
	cout << "4)"; printer.PrintNames(Client4);
	cout << "5)"; printer.PrintNames(Client5);
	cout << "6)"; printer.PrintNames(Client6);
	cout << "How many products do you want?" << endl;
	int choosed;
	cin >> choosed;
	SDL_DestroyWindow(Forimage::window);
	SDL_DestroyRenderer(Forimage::renderer);
	SDL_Quit();
	cout << endl;
	cout << "Please choose products!" << endl;
	int chnumb = 0;
	for (size_t i = 0; i < choosed; i++)
	{
		if (cin >> chnumb)
		{
			switch (chnumb)
			{
			case 1:
				Addvector.push_back(Client1);
				break;
			case 2:
				Addvector.push_back(Client2);
				break;
			case 3:
				Addvector.push_back(Client3);
				break;
			case 4:
				Addvector.push_back(Client4);
				break;
			case 5:
				Addvector.push_back(Client5);
				break;
			case 6:
				Addvector.push_back(Client6);
				break;
			default:
				break;
			}
		}
	}

	GoldCard goldcard("GoldCard", Addvector);
	SilverCard silvercard("SilverCard", Addvector);
	BronzeCard bronzecard("BronzeCard", Addvector);
	
	cout << endl;

	cout << "What card do you have?" << endl;
	cout << "1) GoldCard" << endl;
	cout << "2) SilverCard" << endl;
	cout << "3) BronzeCard" << endl;
	int chnumb2;
		if (cin >> chnumb2)
		{
			switch (chnumb2)
			{
			case 1:
				for (size_t i = 0; i < choosed; i++)
				{
					Cardvector.push_back(goldcard);
				}
				break;
			case 2:
				for (size_t i = 0; i < choosed; i++)
				{
					Cardvector.push_back(silvercard);
				}
				break;
			case 3:
				for (size_t i = 0; i < choosed; i++)
				{
					Cardvector.push_back(bronzecard);
				}
				break;
			default:
				break;
			}
		}

	cout << endl;

	cout << "Your count!" << endl;
	cout << endl;
	cout << "<----------------------------------------->" << endl;
	cout << endl;
	file.add(Addvector, Cardvector);

	cin.get();
	cin.get();
	return 0;
}