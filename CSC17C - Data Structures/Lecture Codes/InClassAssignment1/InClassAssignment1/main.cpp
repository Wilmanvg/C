// InClassAssignment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Hominid.h"


int main()
{
	Hominid hom_1;
	Hominid hom_2("Human", true);

	hom_2.displayInfo();
	hom_1.setInfo("Organtuan", false);
	hom_1.displayInfo();
    return 0;
}

