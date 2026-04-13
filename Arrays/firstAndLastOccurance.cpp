#include <iostream>
using namespace std;

int findLast(int *arr, int n, int x)
{
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (x == arr[mid])
        {
            last = mid;
            low = mid + 1;
        }

        else if (x < arr[mid])
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }

    return last;
}

int findFirst(int *arr, int n, int x)
{
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (x == arr[mid])
        {
            first = mid;
            low = mid - 1;
        }

        else if (x < arr[mid])
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }

    return first;
}

int main()
{
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int size = sizeof(arr) / sizeof(int);
    int x = 5;

    int firstOccurance = findFirst(arr, size, x);
    int lastOccurance = findLast(arr, size, x);

    cout << firstOccurance << ", " << lastOccurance << endl;

    return 0;
}