#include <stdio.h>


void reverse(int arr[], int low, int high)
{
	while(low < high)
	{
		int temp=arr[high];
		arr[high]=arr[low];
		arr[low]=temp;

		low++;
		high--;
	}
}   

void leftRotate(int arr[], int d, int n)
{
	reverse(arr, 0, d - 1);

	reverse(arr, d, n - 1);

	reverse(arr, 0, n - 1);
}



int main() {
	
      int arr[] = {1, 2, 3, 4, 5}, n = 5, d = 2;

      printf("Before Rotation \n");

       for(int i = 0; i < n; i++)
       {
       		printf("%d ",arr[i]);
       }

       printf("\n");

       leftRotate(arr, d, n);

       printf("After Rotation \n");

       for(int i = 0; i < n; i++)
       {
       		printf("%d ",arr[i]);
       }
    
}
