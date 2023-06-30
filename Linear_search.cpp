#include<iostream>
using namespace std;
int linear_search(int arr[],int n, int x){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
    }
    return 0;
}
int main()
{
    int n=4;
    int arr[]={1,2,3,4};
    int x=3;
    cout<<linear_search(arr,n,x);
    return 0;
   
}
