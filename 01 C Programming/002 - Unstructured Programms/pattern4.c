//	Printing Star Pattern - 4

#include<stdio.h>
void main ()
{
	// In this programme we will take number of rows from user and print
	// the fourth pattern of star.
	
	int i,j,r;
	/*
	 value of i will be use as number of rows.
	 value of j will be use as number of column.
	 r is for storing number of rows given by user.
	*/
	
	// Let's take the number of rows from user.
	printf("Enter the number of rows:");
	scanf("%d",&r);
	
	// Let's print the pattern.
	/*
	We will use two for loops, one as a outer for loop and another one as a inner 
	for loop.
	*/
	for(i=r;i>0;i--)
	{
		// It is our outer for loop.It is for number of rows.
		
		for(j=1;j<=i;j++)
		{
			// It is our inner for loop.It is for number of column.
			// Here we will print the star.
			printf("*");
		}
		// Now at every times when inner for loop will completed we will take new line.
		printf("\n");
		
	}
}
