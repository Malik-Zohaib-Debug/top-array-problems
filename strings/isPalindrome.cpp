#include <iostream>
using namespace std;

bool isPalindrome(string word)
{
    int start = 0;
    int end = word.length() - 1;

    while (start <= end)
    {
        if (word[start] == word[end])
            return true;

        start++;
        end--;
    }

    return false;
}

int main()
{
    string word = "RAR";
    int result = isPalindrome(word);

    if (result)
    {
        cout << word << " is Palindrome" << endl;
        return 0;
    }

    cout << "Not a palindrome" << endl;

    return 0;
}