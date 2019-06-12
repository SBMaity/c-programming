#include <stdio.h>
int main ()
{
	int i,n;
	printf("Enter the no of lines in a group:\t");
	scanf("%d", &n);
	for ( i = 32; i <= 128; i++)
	{
		if (((i-32)%n) == 0)
		{
			printf("\n");
			printf("respective character of %d is:\t %c \n",i,i);
		}

		else
		{
			printf("respective character of %d is:\t %c \n",i,i);
		}
		
	}
	return 0;
}