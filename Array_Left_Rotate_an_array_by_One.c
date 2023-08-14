#include <stdio.h>

void lRotateOne(int arr[], int n)
{
	int temp = arr[0];

	for(int i = 1; i < n; i++)
	{
		arr[i - 1] = arr[i];
	}

	arr[n - 1] = temp;
}
    
int main() {
	
      int arr[] = {1, 2, 3, 4, 5}, n = 5;

      printf("Before Rotation \n");

       for(int i = 0; i < n; i++)
       {
       		printf("%d ",arr[i]);
       }

       printf("\n");

       lRotateOne(arr, n);

       printf("After Rotation \n");

       for(int i = 0; i < n; i++)
       {
       		printf("%d ",arr[i]);
       }
    
}
