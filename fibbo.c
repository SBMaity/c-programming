#include <stdio.h>


int main(void) 
{
	int n, first=0, second=1, next, c;
    
	printf("Enter the no of terms:\t");
    
	scanf("%d",&n);
    
	printf("\n%d of terms of fibbonacci series are:\t",n);
    
	for(c=0; c<n; c++)
    
	{
        
		if(c<=1)
        
		{
            		
			next = c;
		}
        
		
		else

		{
            
			next = first + second;
            
			first = second;
            
			second = next;
		}
        
		printf("%d\t",next);
    
	}
	
	return 0;

}

