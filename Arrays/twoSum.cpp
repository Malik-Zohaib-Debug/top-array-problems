#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(int *arr, int n, int target)
{
    if (n == 2)
    {
        if (arr[0] + arr[1] == target)
        {
            return {arr[0], arr[1]};
        }
    }

    unordered_map<int, int> mpp;
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        if (mpp.find(target - arr[i]) != mpp.end())
        {
            result.push_back(target - arr[i]);
            result.push_back(i);
            return result;
        }
        mpp[arr[i]] = i;
    }
    return result;
}

int main()
{
    int arr[] = {2, 7, 11, 15}, target = 9;
    int n = sizeof(arr) / sizeof(int);

    vector<int> ans = twoSum(arr, n, target);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}