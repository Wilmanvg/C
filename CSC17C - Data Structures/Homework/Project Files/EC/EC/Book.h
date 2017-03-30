// =======================================
// =======================================
// Book.h

#pragma once

#include <iostream>
#include <string>
using namespace std;

struct Book
{
	int id;
	string title;
	string author;
	Book* next;
};
