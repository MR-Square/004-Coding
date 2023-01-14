// Printing Number Pattern - 9

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
	
	// Let's take the number of rows from user.
	printf("Enter the number of rows::");
	scanf("%d",&r);
	
	/*
	To print the pattern we will use three for loops, one as a outer for loop
	and another two as a inner for loops.In this program we will print the 
	value of j variable.
	*/
	for(i=1;i<=r;i++)
	{
		// It is our outer for loop.
		// It will take new line after inner for loop.
		
		for(j=1;j<=r-i;j++)
		{
			// It is our first inner for loop.
			// It will print the space.
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			// It is our second inner for loop.
			// It will print the value of j variable.
			printf("%d",j);
		}
		
		// In outer for loop let's take new line.
		printf("\n");
	}
	
	printf("\nLIKE,SHARE AND SUBSCRIBE THE CHANNEL\nMR SQUARE");
}





