#include <iostream>
using namespace std;

void reverseWord(string word)
{
    int start = 0;
    int end = word.length() - 1;
    while (start <= end)
    {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;

        start++;
        end--;
    }

    cout << word;
}

int main()
{
    string word = "HelloWorld";

    reverseWord(word);

    return 0;
}