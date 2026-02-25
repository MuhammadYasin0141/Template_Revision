#pragma once
#include <iostream>
using namespace std;

class Student
{

private:
    char* regNo;
    double CGPA;

public:
    Student();
    Student(const char* r, double c);
    Student(const Student& s);
    ~Student();

    void display() const;

    static void selectionSort(Student A[], int N);
    static int linearSearch(Student A[], int N, double value);
    static int binarySearch(Student A[], int N, double value);

};