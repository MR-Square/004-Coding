//	Printing Number Pattern - 2

#include<stdio.h>
void main ()
{
	// In this program we will take number of rows and columns from user
	// and print the matrix of number.
	
	int i,j,r,c;
	/*
	i variable is for outer for loop.
	j variable is for inner for loop.
	r variable is for storing number of rows given by user.
	c variable is for storing number of columns given by user.
	*/
	
	// Now we will take number of rows and columns from user.
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of columns:");
	scanf("%d",&c);
	
	// Let's print the pattern.
	
	/*
	We will use tow for loops, one as a outer for loop and another one as a 
	inner for loop.In this program we will print the value of j variable.
	*/
	
	for(i=1;i<=r;i++)
	{
		// It is our outer for loop.
		// It will take new line after inner for loop.
		
		for(j=1;j<=c;j++)
		{
			// It is our inner for loop.
			// It will print the value of j variable.
			printf("%d ",j);
		}
		
		// Now in outer for loop we will take new line.
		printf("\n");
	}
	
	printf("\nLIKE, SHARE AND SUBSCRIBE THE CHANNEL.\nMR SQUARE");
}
