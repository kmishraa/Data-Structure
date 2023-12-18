#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char         a[])
{
    int n = strlen(a);
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        { // if first index and last index is equal
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    char word[100];
    cout << "Enter the word: ";
    cin >> word;
    cout << "Palindrome or not: " << checkPalindrome(word) << endl;

    return 0;
}
