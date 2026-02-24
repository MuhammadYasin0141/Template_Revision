#include <iostream>
using namespace std;

void selectionSort(int A[], int N)
{
    for (int I = 0; I < N - 1; I++)
    {
        int SmallSub = I;

        for (int J = I + 1; J < N; J++)
        {
            if (A[J] < A[SmallSub])
            {
                SmallSub = J;
            }
        }


        int temp = A[I];
        A[I] = A[SmallSub];
        A[SmallSub] = temp;
    }
}

int main()
{
    int A[] = { 64, 25, 12, 22, 11 };
    int N = sizeof(A) / sizeof(A[0]);

    selectionSort(A, N);

    cout << "Sorted array: ";
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}