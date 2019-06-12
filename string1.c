#include <stdio.h>
int length(char*str)
{
	int i;
	for (i = 0; str[i]; i++)
	{
		
	}
	return i;
}

int main (void)
{
	char str[50];
	scanf("%[^\n]",&str);
	printf ("\nLength : %d", length(str));
	return 0;
}