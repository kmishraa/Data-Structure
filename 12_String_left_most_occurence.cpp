#include <iostream>
using namespace std;

int leftmost(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                return i;
            }
        }
        return -1;
    }
}

int main()
{
    string str = "geeksforgeeks";
    cout << "Index of leftmost repeating character:" << endl;
    cout << leftmost(str) << endl;

    return 0;
}
