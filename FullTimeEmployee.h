#pragma once
#include "Employee.h"
#include<iostream>
using namespace std;

class FullTimeEmployee : public Employee
{
	int months;

public:

	void input();
	virtual void calculateSalary();

};

