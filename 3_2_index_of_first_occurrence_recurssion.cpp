//less time complexity will be obtained with binary search
#include<iostream>
using namespace std;
int firstOcc(int arr[],int n, int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;

		if(x>arr[mid])
		low=mid+1;

		else if(x<arr[mid])
		high=mid-1;

		else{
			if(mid==0 || arr[mid-1]!= arr[mid])
			// either mid=0 or element before mid is not equal to mid then return mid
			return mid;

			else
			high= mid-1; //left part
		}
	}
	return -1;
}

int main()
{
	int arr[]={10,20,30,40,50,50,60};
	int n=7;
	int x=50;
	cout<<firstOcc(arr,n,x);
	return 0;

}
