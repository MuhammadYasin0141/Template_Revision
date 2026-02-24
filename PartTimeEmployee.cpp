#include "PartTimeEmployee.h"
void PartTimeEmployee::input()
{

	cout << " - Enter The Hours" << endl;
	cin >> perHour;

}
void PartTimeEmployee::calculateSalary()
{
	int totalsalary = perHour * 250;
	cout << " - The Total Salary Of PartTimeEmployee Works "
		<< perHour << " Hour is: " << totalsalary << endl;

}