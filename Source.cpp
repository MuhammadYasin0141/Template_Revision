#include"Course.h"
#include"OfflineCourse.h"
#include"OnlineCourse.h"

int main()
{
	OfflineCourse oc1;
	oc1.input();
	OnlineCourse oc2;
	oc2.input();
	Course* c1 = new OfflineCourse(oc1);
	Course* c2 = new OnlineCourse(oc2);

	c1->duration();
	c2->duration();

	return 0;

}