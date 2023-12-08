#include <iostream>
using namespace std;

void reverse              (char name[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        swap(name[low++], name[high--]);
    }
}
int length(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    int n = 20;
    cout << "Enter you name: ";
    cin >> name;

    cout << "your name is  : ";
    cout << name << endl;

    int len = length(name);
    reverse(name, len);
    cout << "Your reversed name is: ";
    cout << name << endl;

    return 0;
}
