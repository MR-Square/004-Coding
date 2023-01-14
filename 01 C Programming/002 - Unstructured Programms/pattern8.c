//	Printing Star Pattern - 8

#include<stdio.h>
void main ()
{
	// In this program we will print the reverse pattern of pyramid.
	
	int i,j,r;
	/*
	value of i will be use as number of rows.
	value of j will be use as number of columns.
	r will be use to store the number of rows given by user.
	*/
	
	// Now we will take the number of rows from user.
	printf("Enter the number of rows:");
	scanf("%d",&r);
	
	// Let's print the pattern.
	
	/*
	We will use three for loops, one as a outer for loop and another two as a
	inner for loops.We will use i variable in outer for loop and j variable in
	both inner for loops.As we have declared j variable so we can use it in so
	many for loops.It will not give any error.
	*/
	for(i=r;i>0;i--)
	{
		// It is our outer for loop.
		// It will take new line after completion of both inner for loops.
		
		for(j=1;j<=r-i;j++)
		{
			// It is our first inner for loop.
			// It will print space.
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			// It is our second inner for loop.
			// It will print star with single space.
			printf("* ");
		}
		
		// Now in outer for loop we will take new line.
		printf("\n");
	}
	
	
	printf("\nLIKE, SHARE AND SUBSCRIBE TO MY CHANNEL.");
	
	
}
