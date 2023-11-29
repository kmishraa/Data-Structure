#include <iostream>
using namespace std;

int main()
{
    char X;
    cout << "Enter a character:";
    cin >> X;
    X = X + 32;
    cout << "Converted character to lowercase:";
    cout << X;
    return 0;
}

// X=X+32
// Converts the character to lowercase. In ASCII, the difference between
// uppercase and lowercase letters is 32. So, adding 32 to the ASCII value
// of an uppercase letter converts it to lowercase.
