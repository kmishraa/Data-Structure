#include<iostream>
using namespace std;
int binary(int arr[], int n, int x)
{
    int start=0;
    int end=(n-1);
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x) //left side
        {
            end=mid-1;
        }
        else if(arr[mid]<x) //right side
        {
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n=5;
    int x=3;
    int arr[5]={2,3,4,5,6};
    cout<<binary;
    return 0;
}
