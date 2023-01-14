// Printing Star Pattern - 10

#include<stdio.h>
void main ()
{
	// In this program we will print the hollow rectangle pattern of star.
	
	int l,b,i,j;
	/*
	l is for storing length of rectangle.
	b is for storing breadth of rectangle.
	i is for using in outer for loop.
	j is for using in inner for loop.
	*/
	
	// Let's take the length and breadth of rectangle from user.
	printf("Enter the length = ");
	scanf("%d",&l);
	printf("Enter the breadth = ");
	scanf("%d",&b);
	
	/*
	To print the pattern we will use three for loops, one as a outer for loop
	and another two as a inner for loops.
	*/
	for(i=1;i<=l;i++)
	{
		// It is our outer for loop.
		if(i==1 || i==l)
		{
			// This is for printing stars in first and last row of pattern.
			for(j=1;j<=b;j++)
			{
				// It is our first inner for loop.
				// It will print the stars in first and last rows.
				printf("* ");
			}
		}
		
		else 
		{
			// This is for printing stars in first and last coloumn of pattern.
			printf("* ");
			for(j=2;j<b;j++)
			{
				// It is our second inner for loop.
				// It will print space between first and last coloum of pattern
				printf("  ");
			}
			printf("*");
		}
		
		// Now in outer for loop let's take new line.
		printf("\n");
	}
	
	printf("\nLIKE, SHARE AND SUBSCRIBE THE CHANNEL\nMR SQUARE");
	
}




