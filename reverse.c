#include <stdio.h>

void reverse(int arr[], int n)
{
	int low = 0, high = n - 1;

	while(low < high)
	{
		int temp = arr[low];

		arr[low] = arr[high];

		arr[high] = temp;

		low++;
		high--;
	}
}

    
int main() {
	
      int arr[] = {10, 5, 7, 30}, n = 4;

      printf("Before Reverse \n");

       for(int i = 0; i < n; i++)
       {
       		printf("%d ",arr[i]);
       }

       printf("\n");

       reverse(arr, n);

       printf("After Reverse \n");

       for(int i = 0; i < n; i++)
       {
       		printf("%d ",arr[i]);
       }
    
}
