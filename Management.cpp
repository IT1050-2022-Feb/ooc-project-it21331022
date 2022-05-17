#include "Management.h"
#include <iostream>

Management::Management()// default constructor
{
	lastModified = "";
}

Management::Management(string lMod) //overloaded constructor
{
	lastModified = lMod;
}

void Management::updateDetails()
{

}

void Management::deleteVacancy()
{

}

Management::~Management()  //Default destructor
{
	cout << "management destroyed" << endl;
}