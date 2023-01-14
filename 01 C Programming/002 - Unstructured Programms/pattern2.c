//	Printing Star Pattern 2

#include<stdio.h>
void main ()
{
	/*
	In this programme we will take number of rows and columns from user and
	print the matrix of star patter number.
	*/
	
	int i,j,r,c;
	/*
	value of i variable will be use as a number of rows.
	value of j variable will be use as a number of columns.
	r will be use to store the number of rows given by user.
	c will be use to store the number of colum given by user.
	*/
	
	// Let's take the number of rows and columns from user.
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of column:");
	scanf("%d",&c);
	
	// Let's print the pattern.
	/*
	We will use two for loops, one as a outer for loop and another one as a inner 
	for loop.
	*/
	for(i=1;i<=r;i++)
	{
		// It is our outer for loop.It is for number of rows.
		
		for(j=1;j<=c;j++)
		{
			// It is our inner for loop.It is for number of column.
			// Here we will print the star.
			printf("*");
		}
		// Now at every times when inner for loop will be completed we will take
		// a new line.
		printf("\n");
	}
}
