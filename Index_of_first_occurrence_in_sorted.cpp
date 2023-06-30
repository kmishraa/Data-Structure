// Iterative method
#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    cout << "Element Not Found";
}
int main()
{
    int n;
    cout << "Number of Element:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Searching Element:";
    cin >> x;
    int ans = firstOcc(arr, n, x);
    cout << ans;
    return 0;
}
