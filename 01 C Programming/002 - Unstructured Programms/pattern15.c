//	Printing Number Pattern - 6

#include<stdio.h>
void main ()
{
	// In this program we will print second type triangle pattern of number
	
	int i,j,r;
	/*
	i variable is for outer for loop.
	j variable is for inner for loop.
	r variable is for storing number of rows given by user.
	*/
	
	//Now let's take value of r from user.
	printf("Enter the number of rows::");
	scanf("%d",&r);
	
	/*
	To print the pattern we will use two for loops, one as a outer for loop 
	and another one as a inner for loop.In this program we will print the 
	value of j variable.
	*/
	
	for(i=r;i>0;i--)
	{
		// It is our outer for loop.
		// It will take new line after inner for loop.
		
		for(j=1;j<=i;j++)
		{
			// It is our inner for loop.
			// It will print the value of j variable.
			printf("%d ",j);
		}
		
		// Now in outer for loop let's take new line.
		printf("\n");
	}
	
	
	printf("\nLIKE,SHARE AND SUBSCRIBE THE CHANNEL\nMR SQUARE");
	
	
	
}
