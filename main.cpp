#include <iostream>
#include <string>
#include "JobSeeker.h"
#include"Applications.h"
#include "Reviewal.h"
#include "Employer.h"
#include "Approve.h"
#include "Moderator.h"
#include "Vacancy.h"
#include"Publishing.h"
#include"Management.h"
#include"Payment.h"
#include"Company.h"
#include "ApproveVacancy.h"
using namespace std;

int main()
{
	JobSeeker JS1("JS001", 0771235567, "pqrs123@gmail.com", "ABC123", "password"); //Username = ABC123 & password = password
	Employer *emp1 = new Employer("EMP001", "Dialog", "PQRS123", "abc123@gmail.com", "HelloWorld123"); //Username= PQRS123 & password= HelloWorld123
	Moderator mod1("MOD001", "RST123", "ghi@gmail.com", "ROFL!123");  //Username=RST123     &password=ROFL!123
	Vacancy *vac1 = new Vacancy(1001, "Software developer", "Colombo", 100000, "Full time", "22/04/2022");
	Applications *app1 = new Applications(001, "28/04/2022");
	Payment *pay1 = new Payment(01, 85200.00, "Online Transfer");
	Company comp1(1234, "Dialog", "EMP001", "PQRS123", "abc123@gmail.com", "HelloWorld123");

	JS1.applyforVacancy(vac1);
	//JS1.submitApplication();
	//JS1.manageApplications();
	JS1.viewRecruiterDetails(emp1);


	emp1->makePayment(pay1);
	/*emp1->receiveApplications();
	emp1->contactApplicants();

	mod1.generateJobReport();
	mod1.generateAccountReports();

	vac1->displayVacancyDetails();
	vac1->validateVacancyDetails();

	app1->validateApplicationDetails();
	app1->makeNewApplications();
	app1->sendApplications();

	pay1->displayPayment();
	pay1->validatePayment();

	comp1.provideContactDetails();

	*/

	Reviewal rvw1(true);
	//rvw1.approveApplications();

	Approve appr1(true);
	//appr1.approveAccount();

	ApproveVacancy avcn1(true);

	Management mng1("06/05/2022");
	//mng1.updateDetails();
	//mng1.deleteVacancy();


	Publishing pbl1("01/04/2022");
	//pbl1.publishVacancy();

	delete emp1;
	delete vac1;
	delete app1;
	delete pay1;
	
	char ch;
	cin >> ch;
	return 0;

}