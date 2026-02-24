#include <iostream>
using namespace std;

void selectionSort(int array[], int size)
{
    for (int I = 0; I < size - 1; I++)
    {
        int SmallSub = I;

        for (int J = I + 1; J < size; J++)
        {
            if (array[J] < array[SmallSub])
            {
                SmallSub = J;
            }
        }


        int temp = array[I];
        array[I] = array[SmallSub];
        array[SmallSub] = temp;
    }
}

int main()
{
    int array[] = { 64, 25, 12, 22, 11 };
    int size = sizeof(array) / sizeof(array[0]);

    selectionSort(array, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}