// Printing Number Pattern - 7

#include<stdio.h>
void main ()
{
	// In this program we will print the inverted triangle pattern of number.
	
	int i,j,r,k=1;
	/*
	i variable is for outer for loop.
	j variable is for inner for loop.
	r variable is for storing number of rows given by user.
	We will print the value of k in pattern.
	*/
	
	// Now we will take the number of rows from user.
	printf("Enter number of rows::");
	scanf("%d",&r);
	
	/*
	To print the pattern we will use two for loop, one as a outer for loop 
	and another one as a inner for loop.
	*/
	for(i=r;i>0;i--)
	{
		// It is our outer for loop.
		// It will take new line and increment the value of k after inner loop.
		
		for(j=1;j<=i;j++)
		{
			// It is our inner for loop.
			// It will print value of k variable.
			printf("%d ",k);
		}
		
		// Now we will increment the value of k.
		k++;
		
		// and then take new line.
		printf("\n");
	}
	
	printf("\nLIKE,SHARE AND SUBSCRIBE THE CHANNEL\nMR SQUARE");
	
	
	
}
