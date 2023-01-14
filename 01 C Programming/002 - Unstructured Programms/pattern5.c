//	Printing Star Pattern - 5

#include<stdio.h>
void main ()
{
	// In this program we will take number of rows from user and print
	// the fifth pattern of star.
	
	int i,j,r;
	/*
	value of i will be use as number of rows.
	value of j will be use as number of column.
	r will be use to store the number of rows given by user.
	*/
	
	// Now let's take the number of rows from user.
	printf("Enter the number of rows:");
	scanf("%d",&r);
	
	/*
	We will use three for loops, one as a outer for loop and reamining two as 
	inner for loops.
	*/
	for(i=1;i<=r;i++)
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
			/*
			As we have not declare j variable in for loops.Therefore we are able to
			use it as many times as we want.
			*/
		}
		
		// Now at every times when our both inner loops will be competed
		// we will take new line.
		printf("\n");
	}
}
