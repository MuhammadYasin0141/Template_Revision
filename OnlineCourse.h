#pragma once
#include<iostream>
using namespace std;
#include "Course.h"
class OnlineCourse :public Course
{

	int weeks;
	int hoursperweek;

public:

	void input();
	void area();
	virtual void duration();


};

