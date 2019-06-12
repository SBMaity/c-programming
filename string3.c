#include <stdio.h>
int length(char*str)
{
	int i;
	for (i = 0; str[i]; i++)
	{
		
	}
	return i;
}
 int checkpalindrome(char*str)
{
	int i, len = length(str);
	for ( i = 0; i < len/2; i++)
	{
		if (str[i] != str [len - i - 1])
		{
			printf("Not a Palindrome!");
			return 0;
		}
		printf("It is a Palindrome.");
		return 1;
	}
}
int main (void)
{
	char str[50];
	scanf("%[^\n]",&str);
	checkpalindrome(str);
	return 0;
}