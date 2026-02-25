#include "Student.h"

int main()
{
    const int N = 10;

    Student A[N] = {
        Student("22F-101", 3.2),
        Student("22F-102", 2.7),
        Student("22F-103", 3.8),
        Student("22F-104", 3.0),
        Student("22F-105", 2.5),
        Student("22F-106", 3.6),
        Student("22F-107", 3.9),
        Student("22F-108", 2.9),
        Student("22F-109", 3.4),
        Student("22F-110", 3.1)
    };

    double value;
    cout << " - Enter CGPA to search: ";
    cin >> value;

    int index = Student::linearSearch(A, N, value);

    if (index != -1)
    {
        cout << " - Found by Linear Search: "<<endl;
        A[index].display();
    }
    else
        cout << " - Not found by Linear Search" << endl;

    Student::selectionSort(A, N);

    index = Student::binarySearch(A, N, value);

    if (index != -1)
    {
        cout << " - Found by Binary Search:" << endl;
        A[index].display();
    }
    else
        cout << " - Not found by Binary Search" << endl;

    return 0;
}