#include <iostream>
using namespace std;

void getFactorial(int value)
{
    int fact = 1;
    for (int i = value; i > 0; i--)
    {
        fact *= i;
    }

    cout << "Factorial of " << value << " = " << fact << endl;
}

int main()
{
    int fact = 5;
    getFactorial(5);

    return 0;
}