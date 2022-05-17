#pragma once
#include "Vacancy.h"

class Management  //Unidirectional association between employer and vacancy
{
private:
	string lastModified;
	Vacancy* vac1;

public:
	Management();
	Management(string lMod);
	void updateDetails();
	void deleteVacancy();
	~Management();

};