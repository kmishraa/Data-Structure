#include<iostream>
using namespace std;
int  countoccurrence(int arr[], int n)
{
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        counter++;
    }
    return counter;
}
int main()
{
    int arr[]={0,0,0,1,1,1,1};
    int n=7;
    cout<<"Occurrence of 1 in a sorted array :";
    cout<<countoccurrence(arr,n);
    return 0;
}
