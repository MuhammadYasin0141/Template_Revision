#include"Employee.h"
#include"FullTimeEmployee.h"
#include"PartTimeEmployee.h"

int main()
{
	FullTimeEmployee f1;
	PartTimeEmployee p1;

	f1.input();
	Employee* e1 = new FullTimeEmployee(f1);
	e1->calculateSalary();

	p1.input();
	Employee* e2 = new PartTimeEmployee(p1);
	e2->calculateSalary();

	return 0;

}