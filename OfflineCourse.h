#pragma once
#include<iostream>
using namespace std;
#include "Course.h"
class OfflineCourse : public Course
{

	int months;
	int hoursperday;

public:

	void input();
	void area();
	virtual void duration();

};

