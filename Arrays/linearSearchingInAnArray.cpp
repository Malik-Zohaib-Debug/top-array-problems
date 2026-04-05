#include <iostream>
using namespace std;

bool linearSearching(int *arr, int n, int ele)
{

    for (int i = 0; i < n; i++)
    {
        if (ele == arr[i])
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);

    bool result = linearSearching(arr, size, 9);

    if (result)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}