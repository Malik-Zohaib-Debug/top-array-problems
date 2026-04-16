#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeSortedArray(int *arr1, int s1, int *arr2, int s2)
{
    vector<int> merge;
    int i = 0;
    int j = 0;

    while (i < s1 && j < s2)
    {
        if (arr1[i] <= arr2[j])
        {
            merge.push_back(arr1[i++]);
        }
        else
        {
            merge.push_back(arr2[j++]);
        }
    }

    while (i < s1)
    {
        merge.push_back(arr1[i++]);
    }

    while (j < s2)
    {
        merge.push_back(arr1[j++]);
    }

    return merge;
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8} int s1 = sizeof(arr1) / sizeof(int);
    int s2 = sizeof(arr2) / sizeof(int);

    vector<int> resultant = mergeSortedArray(arr1, s1, arr2, s2);

    for (auto i : resultant)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}