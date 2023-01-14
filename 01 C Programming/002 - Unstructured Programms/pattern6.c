//	Printing Star Pattern - 6

#include<stdio.h>
void main ()
{
	// In this program we will print the reverse pattern of previous one.
	
	int i,j,r;
	/*
	value of i will be use as number of rows.
	value of j will be use as number of column.
	r will be use to store the number of rows given by user.
	*/
	
	// Now we will take the number of rows from user.
	printf("Enter the number of rows:");
	scanf("%d",&r);
	
	// Let's print the pattern.
	
	/*
	We will use three for loops, one as a outer for loop and remaining two as inner
	for loops.We will use i variable in outer for loop and j variable in both inner
	for loops.As we have declared j before,so we can use it in more than one for 
	loops.
	*/
	for(i=r;i>=1;i--)
	{
		// It is our outer for loop.
		// It is for number of rows.
		
		for(j=1;j<=r-i;j++)
		{
			// It is our first inner for loop.
			// Here we will print the space.
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			// It is our second inner for loop.
			// Here we will print the star.
			printf("*");
		}
		// Now at every times when both inner loops will be completed 
		// we will take new line.
		printf("\n");
	}
}
