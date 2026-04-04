#include <iostream>
#include <vector>
using namespace std;

// space complexity O(1) and time complexity 0(n^2)
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

// space complexity O(n) and time complexity 0(n)
int getArrayEquilibriumIndexOfAnArrayOptimized(int *arr, int size)
{
    vector<int> pref(size - 1, 0);
    vector<int> suff(size - 1, 0);

    pref[0] = arr[0];
    suff[size - 1] = arr[size - 1];

    for (int i = 1; i < size; i++)
    {
        pref[i] = pref[i - 1] + arr[i];
    }

    for (int i = size - 2; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (pref[i] == suff[i])
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