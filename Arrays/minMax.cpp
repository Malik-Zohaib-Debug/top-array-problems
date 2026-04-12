#include <iostream>
using namespace std;
using namespace std;

vector<int> getMinMax(int *arr, int n)
{
    vector<int> result;

    int max = arr[0];
    int min = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    result.push_back(min);
    result.push_back(max);

    return result;
}

int main()
{
    return 0;
}