#include <iostream>
using namespace std;

int getArrayEquilibriumIndexOfAnArray(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {

        int sumLeft = 0;
        for (int j = 0; j < i; j++)
        {
            sumLeft += arr[j];
        }

        int sumRight = 0;
        for (int j = i + 1; j < size; j++)
        {
            sumRight += arr[j];
        }

        if (sumLeft == sumRight)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int size = sizeof(arr) / sizeof(int);

    cout << "Equilibrium Index Of An Array " << getArrayEquilibriumIndexOfAnArray(arr, size);

    return 0;
}