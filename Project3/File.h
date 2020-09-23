#pragma once
#include <fstream>
#include "Add.h"
#include "Fornewprice.h"
using namespace std;
#include <vector>
class File
{
public:
	void print(string information);
	void createfile(string filename);
	void errormessage();
	void RemoveFile(const char* filename);
	void checkyn();
	bool checkfile(string Fname);
	void writeinfile(vector<Add>VPB, vector<Card>Cards);
	void getoutputfile();
	void opendocument();
	void add(vector<Add>target, vector<Card>Carder);
	void removefull();


private:
	string filename = "contacts.txt";
	const char* cfilename = "contacts.txt";
	char chooseaction;
};


