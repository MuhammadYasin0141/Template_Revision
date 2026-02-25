#include "Student.h"
#include <cstring>

Student::Student()
{
    regNo = new char[1];
    regNo[0] = '\0';
    CGPA = 0.0;
}

Student::Student(const char* r, double c)
{
    regNo = new char[strlen(r) + 1];
    strcpy(regNo, r);
    CGPA = c;
}

Student::Student(const Student& s)
{
    regNo = new char[strlen(s.regNo) + 1];
    strcpy(regNo, s.regNo);
    CGPA = s.CGPA;
}

Student::~Student()
{
    delete[] regNo;
}

void Student::display() const
{
    cout << "RegNo: " << regNo << "   CGPA: " << CGPA << endl;
}

void Student::selectionSort(Student A[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < N; j++)
        {
            if (A[j].CGPA < A[min].CGPA)
                min = j;
        }
        Student temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
}

int Student::linearSearch(Student A[], int N, double value)
{
    for (int i = 0; i < N; i++)
    {
        if (A[i].CGPA == value)
            return i;
    }
    return -1;
}

int Student::binarySearch(Student A[], int N, double value)
{
    int low = 0;
    int high = N - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (A[mid].CGPA == value)
            return mid;
        else if (A[mid].CGPA < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}