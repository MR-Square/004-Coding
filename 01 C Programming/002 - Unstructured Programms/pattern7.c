//	Printing Star Pattern - 7

#include<stdio.h>
void main ()
{
	// In this program we will print the pyramid pattern.
	
	int i,j,r;
	/*
	value of i will be use as number of rows.
	value of j will be use as number of column.
	r will be use to store the number of rows user want to print.
	*/
	
	// Now let's take the number of rows from user.
	printf("Enter the number of rows:");
	scanf("%d",&r);
	
	/*
	We will use three for loops to print the pattern.One for loop will be outer for
	loop and remaining two for loop will be our inner for loops.We will use i variable
	in outer for loop and j variable in both inner for loop.As we have declared j varible
	before so we can use it in more than one for loop.
	*/
	for(i=1;i<=r;i++)
	{
		// It is our outer for loop.
		// It is for number of rows of pattern.
		
		for(j=1;j<=r-i;j++)
		{
			// It is our first inner for loop.
			// It will print the space.
			printf(" ");	// Just press single space.
		}
		
		for(j=1;j<=i;j++)
		{
			// It is our second inner for loop.
			// It will print the star with single space.
			printf("* ");
		}
		
		// Now in outer for loop we will take new line.
		printf("\n");
	}
}
