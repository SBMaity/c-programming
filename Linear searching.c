#include <stdio.h>

//search function either returns i or -1
int search (int arr[20], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if(arr[i]== x)
		{
			return i;
		}
	}
	return -1;
}

int main (void)
{
	int arr[20], n, i, j, x;
    // taking the number of inputs of arrays.
	printf ("\n\nEnter the number of element(s):\t");
	scanf("%d",&n);
	printf("\n\n");
	for (i = 0; i<n; i++)
	{
		printf("Enter element:\t",i);
		scanf("%d",&arr[i]);
	}
    // Taking a confirmation of input arrays.
	printf("\nYou entered:\n\n");
	for (j = 0; j < n; j++)
	{
		printf("%d\t",arr[j]);
	}
	printf("\n\nEnter the no you want to find its index:\t");
	scanf("%d",&x);
	int result = search(arr, n, x);
	(result < 0) 	? printf("\nThe entered number is not present\n") 
			: printf("\nThe entered number is present at index %d\n", result);
	return 0;
}
