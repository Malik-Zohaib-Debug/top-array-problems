#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateAnArrayByK(int *arr, int n, int k)
{
    vector<int> result(n);

    for (int i = 0; i < n; i++)
    {
        result[(i + k) % n] = arr[i];
    }

    return result;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);

    vector<int> result = rotateAnArrayByK(arr, size, 3);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}