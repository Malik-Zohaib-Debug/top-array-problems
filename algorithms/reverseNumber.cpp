#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int val = 0;
    while (num != 0)
    {
        int r = num % 10;
        val = val * 10 + r;
        num = num / 10;
    }

    return val;
}

int main()
{

    int num = 456;

    cout << reverseNumber(num);

    return 0;
}