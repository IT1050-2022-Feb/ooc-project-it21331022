#include "Vacancy.h"
#include <iostream>
using namespace std;

//DEpendancy relationship between Job seeker and Vacancy

Vacancy::Vacancy()// Default constructor
{
	vacancyID = 000;
	vacancyTitle = "";
	location = "";
	salary = 000;
	vacancyType = "";
	publishDate = "";
}

Vacancy::Vacancy(int vID, string vTitle, string loc, int sal, string vType, string pDate)//Overloaded constructor
{
	vacancyID = vID;
	vacancyTitle = vTitle;
	location = loc;
	salary = sal;
	vacancyType = vType;
	publishDate = pDate;
}

void Vacancy::displayVacancyDetails()
{

}

void Vacancy::validateVacancyDetails()
{

}
Vacancy::~Vacancy() //Default destructor
{
	cout << "Vacancy destroyed" << endl;
}
