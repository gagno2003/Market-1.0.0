#include "Chooses.h"

void Chooses::Choose1(int choosed, int chnumb, vector<Add> vectorer, Add add1, Add add2, Add add3, Add add4, Add add5)
{
	for (size_t i = 0; i < choosed; i++)
	{
		if (cin >> chnumb)
		{
			switch (chnumb)
			{
			case 1:
				vectorer.push_back(add1);
				break;
			case 2:
				vectorer.push_back(add2);
				break;
			case 3:
				vectorer.push_back(add3);
				break;
			case 4:
				vectorer.push_back(add4);
				break;
			case 5:
				vectorer.push_back(add5);
				break;
			default:
				break;
			}
		}
	}
}

void Chooses::Choose2(char yn, File file)
{
	switch (yn)
	{
	case 'y':
		file.getoutputfile();
		break;
	case 'n':
		cout << "Okay!!!" << endl;
		break;
	default:
		break;
	}
}
