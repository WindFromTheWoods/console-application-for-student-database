#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "students.h"
using namespace std;
class data_base
{
public:
	void add();
	void list();
	void delite();
	void edit();
private:
	vector <student> bd;
};
