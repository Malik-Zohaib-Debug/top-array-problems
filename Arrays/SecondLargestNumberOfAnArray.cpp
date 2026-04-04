#include <iostream>
using namespace std;

vector<int> getLargestAndSecondLargestElementFromAnArray(int *arr, int n)
{
    vector<int> result;

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (largest > arr[i] && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    result.push_back(largest);
    result.push_back(secondLargest);

    return result;
}

int main()
{
    int arr[] = {2, 3, 8, 1, 3, 2, 6, 4};
    int size = sizeof(arr) / sizeof(int);

    vector<int> results;

    results = getLargestAndSecondLargestElementFromAnArray(arr, size);

    for (auto i : results)
    {
        cout << i << " ";
    }

    return 0;
}