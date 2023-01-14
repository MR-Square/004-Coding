//	Printing Star Pattern - 9

#include<stdio.h>
void main ()
{
	// In this program we will print the diamond pattern of star.
	
	int i,j,r;
	/*
	value of i will be use as number of rows of pattern.
	value of j will be use as number of columns of pattern.
	r will be use to store the number of rows user want to print.
	*/
	
	// Let's take the number of rows from user.
	printf("Enter the number of rows:");
	scanf("%d",&r);
	
	/*
	We will use six for loops, two as a outer for loops and remaining four as a
	inner for loops.As we have declared i and j variable before using loops.
	Therfore we can use them in so many loops.
	*/
	for(i=1;i<=r;i++)
	{
		// It is our first outer for loop.
		// It will take new line after complition of both inner for loops.
		
		for(j=1;j<=r-i;j++)
		{
			// It is our first inner for loop.
			// It will print the space.
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			// It is our second inner for loop.
			// It will print the star.
			printf("* ");
		}
		// Now in our outer for loop we will take new line.
		printf("\n");
	}
	
	for(i=r-1;i>0;i--)
	{
		// It is our second outer for loop.
		// It will also take new line after complition of both inner for loops.
		
		for(j=1;j<=r-i;j++)
		{
			// It is our third inner for loop.
			// It will print the space.
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			// It is our fourth inner for loop.
			// It will print the star.
			printf("* ");
		}
		
		// Now in outer for loop we will take new line.
		printf("\n");
	}
	
	printf("\nLIKE, SHARE AND SUBSCRIBE THE CHANNEL.");
	
	
	
	
	
}
