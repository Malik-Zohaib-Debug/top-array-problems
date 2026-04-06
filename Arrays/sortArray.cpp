#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> sortArray(int *arr, int n)
{
    map<int, int> mpp;
    vector<int> newArr;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto i : mpp)
    {
        int count = i.second;
        while (count)
        {
            newArr.push_back(i.first);
            count--;
        }
    }

    return newArr;
}

int main()
{
    int arr[] = {5, 2, 1, 2, 3, 4, 9, 4, 5, 7, 0, 7, 5, 9, 8, 6, 4, 2, 1};
    int size = sizeof(arr) / sizeof(int);

    vector<int> resultant;
    resultant = sortArray(arr, size);

    for (auto i : resultant)
    {
        cout << i << " ";
    }
    return 0;
}