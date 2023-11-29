#include <iostream>
using namespace std;
bool isSubSeq(string s1, string s2, int n, int m)
{
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
    {
        if (s1[i] == s2[j])
            j++;
    }
    return j == m; // return true
}

int main()
{
    int n, m;
    string s1, s2;
    cout << "Enter n and m: ";
    cin >> n >> m;

    cout << "Enter the string s1 and s2: ";
    cin >> s1 >> s2;

    cout << boolalpha << isSubSeq(s1, s2, n, m);

    return 0;
}

// time complexity= O(n+m)
