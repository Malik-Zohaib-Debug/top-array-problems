#include <iostream>
using namespace std;

int getSingleUniqueFromAnArray(int *arr, int n)
{
    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        unique = unique ^ arr[i];
    }

    return unique;
}

int main()
{
    int arr[] = {1, 2, 1, 2, 5, 6, 6, 7, 7};
    int size = sizeof(arr) / sizeof(int);

    cout << "Unique Element of An Array: " << getSingleUniqueFromAnArray(arr, size);

    return 0;
}