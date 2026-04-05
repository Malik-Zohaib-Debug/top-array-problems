#include <iostream>
using namespace std;

int binarySearching(int *arr, int n, int ele)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (ele > arr[mid])
        {
            start = mid + 1;
        }
        else if (ele < arr[mid])
        {
            end = mid - 1;
        }
        else if (arr[mid] == ele)
        {
            return mid;
        }

        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int ele = 7;

    int resultantIndex = binarySearching(arr, size, ele);

    if (resultantIndex == -1)
    {
        cout << "Not Found";
        return 0;
    }

    cout << ele << " Found at index " << resultantIndex;
    return 0;
}