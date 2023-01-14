//	Printing Number Pattern - 1

#include<stdio.h>
void main ()
{
	// In this program we will take number of rows and column from user
	// and print the matrix of numbers.
	
	int i,j,r,c;
	/*
	i variable will be use in outer for loop.
	j variable will be use in inner for loop.
	r will be use to store number of rows given by user.
	c will be use to store number of columns given by user.
	*/
	
	// Now we will take number of rows and columns from user.
	printf("Enter the number of rows:");
	scanf("%d",&r);
	printf("Enter the number of columns:");
	scanf("%d",&c);
	
	// Let's print the matrix.
	
	/*
	We will use two for loops, one as a outer for loop and another one as a 
	inner for loop.In this program we will print the value of i variable.
	*/
	
	for(i=1;i<=r;i++)
	{
		// It is our outer for loop.
		// It will take new line after complition of inner for loop.
		
		for(j=1;j<=c;j++)
		{
			// It is our inner for loop.
			// It will print the value of i variable
			printf("%d",i);
		}
		
		// Now in outer for loop we will take new line.
		printf("\n");
	}
	
	printf("\nLIKE, SHARE AND SUBSCRIBE THE CHANNEL.\nMR SQUARE");
	
}
