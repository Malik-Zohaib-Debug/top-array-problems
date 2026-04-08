#include <iostream>
using namespace std;

void displayArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int *arr, int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;

        s++;
        e--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);

    // Before swapping array
    displayArray(arr, size);

    reverseArray(arr, size);

    // After swapping array
    displayArray(arr, size);

    return 0;
}