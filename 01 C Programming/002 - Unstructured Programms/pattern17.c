//	Printing Number Pattern - 8

#include<stdio.h>
void main ()
{
	// In this program we will take number of rows from user and print the 
	// right-angle triangle pattern of numbers.
	
	int i,j,r;
	/*
	i variable is for using in outer for loop.
	j variable is for using in inner for loop.
	r variable is for storing number of rows given by user.
	*/
	
	// Let's take number of rows from user.
	printf("Enter number of rows:");
	scanf("%d",&r);
	
	
	/*
	We will use three for loops, one as a outer for loop and another two as a
	inner for loops.As we have declared j variable before so we can use it in
	so many for loops.In this program we will print the value of i variable.
	*/
	
	for(i=1;i<=r;i++)
	{
		// It is our outer for loop.
		// It will take new line after both inner for loops.
		
		for(j=1;j<=r-i;j++)
		{
			// It is first inner for loop.
			// It will print the space.
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			// It is second inner for loop.
			// It will print the value of i variable.
			printf("%d",i);
		}
		
		// Now in outer for loop we will take new line.
		printf("\n");
	}
	
	
	printf("\nLIKE,SHARE AND SUBSCRIBE THE CHANNEL\nMR SQUARE");
	
	
}
