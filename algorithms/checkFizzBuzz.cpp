#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fizzBuzz(int n)
{
    vector<string> resultant;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            resultant.push_back("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            resultant.push_back("Fizz");
        }
        else if (i % 5 == 0)
        {
            resultant.push_back("Buzz");
        }
        else
        {
            string digit = to_string(i);
            resultant.push_back(digit);
        }
    }

    return resultant;
}

int main()
{
    vector<string> ans = fizzBuzz(15);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}