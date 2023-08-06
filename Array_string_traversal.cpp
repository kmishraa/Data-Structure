#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "gfg";
    
    for(int i = 0; i < str.length(); i++)
        cout << str[i];
    cout << endl;
  
    for(char x: str)
        cout << x;
    cout << endl;
    
    for(auto it = str.begin(); it != str.end(); it++)
        cout << (*it);

    return 0;
}
