#pragma once
#include <vector>
#include "Add.h"
#include <iostream>
#include "File.h"
using namespace std;
class Chooses
{
public:
	Chooses() { }
	void Choose1(int choosed, int chnumb, vector<Add>vectorer, Add add1, Add add2, Add add3, Add add4, Add add5);
	void Choose2(char yn, File file);
};

