#include <stdio.h>

int insert(int arr[], int n, int x, int cap, int pos)
{
	if(n == cap)
		return n;

	int idx = pos - 1;

	for(int i = n - 1; i >= idx; i--)
	{
		arr[i + 1] = arr[i];
	}

	arr[idx] = x;

	return n + 1;
} 


    
int main() {
	
       int arr[5], cap = 5, n = 3;

       arr[0] = 5; arr[1] = 10; arr[2] = 20;

       printf("Before Insertion \n");

       for(int i=0; i < n; i++)
       {
       	    printf("%d ",arr[i]);
       }

       printf("\n");

       int x = 7, pos = 2;

       n = insert(arr, n, x, cap, pos);

       printf("After Insertion \n");

       for(int i=0; i < n; i++)
       {
       		printf("%d ",arr[i]);
       }
    
}
