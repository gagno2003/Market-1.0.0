#include "File.h"


void File::print(string information)
{
	cout << information << endl;
}

void File::createfile(string filename)
{
	fstream file;
	file.open(filename, fstream::out);
	print("File Succesfuly created...");
}

void File::errormessage()
{
	print("Error File doesn't exists");
	print("Press any key to exit ...");
	cin.get();
	cin.get();
	system("cls");
}

void File::RemoveFile(const char* filename)
{
	remove(filename);
	print("File Deleted");
}

void File::checkyn()
{
	errormessage();
	print("Do you want to create File ?");
	print("y/n");

	if (cin >> chooseaction)
	{
		switch (chooseaction)
		{
		case 'y': createfile(filename);
			break;

		case 'n': system("cls");
			break;

		default:
			print("please enter a valid input to continue ...");
			break;
		}
	}
}

bool File::checkfile(string Fname)
{
	ifstream infile(Fname);
	return infile.good();
}

void File::writeinfile(vector<Add> VPB, vector<Card>Cards)
{
	if (checkfile(filename))
	{
		ofstream file;
		file.open(filename);

		for (size_t i = 0; i < VPB.size(); i++)
		{
			file << VPB[i].Getname() << "[Mass: " << VPB[i].Getmass();
			if (VPB[i].Getcategory() == Category::Food)
			{
				file << "Kg";
			}
			else
			{
				file << "L";
			}

			file << " Price: " << VPB[i].Getprice() << "$ Category: ";

			if (VPB[i].Getcategory() == Category::Food)
			{
				file << "Food ";
			}
			else
			{
				file << "Drink ";
			}

			file << "Card: " << Cards[i].Getcardname() << " New price: " << Cards[i].Getnewprice()[i] << "$]" << endl;
		}

		file.close();
	}
	else
	{
		checkyn();
	}
}

void File::getoutputfile()
{
	if (checkfile(filename))
	{
		vector<char>vs;
		ifstream file(filename);
		file.seekg(0, std::ios_base::end);
		streampos filesize = file.tellg();
		vs.resize(filesize);
		file.seekg(0, std::ios_base::beg);
		file.read(&vs[0], filesize);
		for (auto item : vs)
		{
			cout << item;
		}
	}
	else
	{
		checkyn();
	}
}

void File::opendocument()
{
	if (checkfile(filename))
	{
		string open = "notepad.exe contacts.txt";
		system(open.c_str());
	}
	else
	{
		checkyn();
	}
}

void File::add(vector<Add> target, vector<Card>Carder)
{
	writeinfile(target, Carder);
	getoutputfile();
}

void File::removefull()
{
	if (checkfile(filename))
	{
		print("Do you want to remove file?");
		print("y/n");
		char answer;
		cin >> answer;
		switch (answer)
		{
		case 'y': RemoveFile(cfilename);
		default:
			system("cls");
			break;
		}
	}
	else
	{
		print("File is already deleted");
	}
}

