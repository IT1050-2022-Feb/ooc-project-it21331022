#pragma once
#include<string>
using namespace std;

//Unidirectional association between employer and vacancy
//Unidirectional association between Moderator and Vacancy 
class Vacancy
{
private:
	int vacancyID;
	string vacancyTitle;
	string location;
	int salary;
	string vacancyType;
	string publishDate;

public:
	Vacancy();
	Vacancy(int vID, string vTitle, string loc, int sal, string vType, string pDate);
	void displayVacancyDetails();
	void validateVacancyDetails();
	~Vacancy();

};