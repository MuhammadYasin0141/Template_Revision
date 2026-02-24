#pragma once
#include "Employee.h"
#include<iostream>
using namespace std;
class PartTimeEmployee : public Employee
{

	int perHour;

public:

	void input();
	virtual void calculateSalary();

};


