//	Printing Number Pattern - 4

#include<stdio.h>
void main ()
{
	// In this program we will print the number pattern in right-angle triangle
	// form.
	
	int i,j,r;
	/*
	i variable is for outer for loop.
	j variable is for inner for loop.
	r variable is for storing number of rows given by user.
	*/
	
	// Now we will take number of rows from user.
	printf("Enter the number of rows::");
	scanf("%d",&r);
	
	/*
	To print the pattern we will use two for loops, one as a outer for loop and
	another one as a inner for loop.In this program we will print the value of
	j variable.
	*/
	
	for(i=1;i<=r;i++)
	{
		// It is our outer for loop.
		// It will take new line after inner for loop.
		
		for(j=1;j<=i;j++)
		{
			// It is our inner for loop.
			// It will print the value of j variable.
			printf("%d ",j);
		}
		
		// Now in outer for loop we will take new line.
		printf("\n");
	}
	
	printf("\nLIKE,SHARE AND SUBSCRIBE THE CHANNEL\nMR SQUARE");
	
	
	
	
}
