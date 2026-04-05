#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> getUniqueElementsOfAnArray(int *arr, int n)
{
    map<int, int> mapper;
    vector<int> uniqueEles;

    for (int i = 0; i < n; i++)
    {
        mapper[arr[i]]++;
    }

    for (auto i : mapper)
    {
        if (i.second == 1)
        {
            uniqueEles.push_back(i.first);
        }
    }

    return uniqueEles;
}

int main()
{
    int arr[] = {1, 2, 8, 3, 2, 2, 1, 9, 5, 6, 6, 9, 9, 8, 4, 2, 3, 7};
    int size = sizeof(arr) / sizeof(int);

    vector<int> uniqueElements;

    uniqueElements = getUniqueElementsOfAnArray(arr, size);

    for (auto i : uniqueElements)
    {
        cout << i << " ";
    }

    return 0;
}