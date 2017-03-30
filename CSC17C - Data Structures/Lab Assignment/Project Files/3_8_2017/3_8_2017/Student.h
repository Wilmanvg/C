#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#pragma once


struct Student {
	int idNum;
	string name;
	Student *next;
};