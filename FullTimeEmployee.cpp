#include "FullTimeEmployee.h"

void FullTimeEmployee::input()
{

	cout << " - Enter The Months" << endl;
	cin >> months;

}
void FullTimeEmployee::calculateSalary()
{
	int totalsalary = months * 25000;
	cout << " - The Total Salary Of FullTimeEmployee Works "
		<< months << " Months is: " << totalsalary << endl;

}