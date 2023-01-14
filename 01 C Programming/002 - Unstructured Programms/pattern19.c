//	Printing Star Pattern - 11

#include<stdio.h>
void main ()
{
	// In this program we will print the cross pattern of star.
	
	int i,j,no;
	/*
	i variable is for using in outer for loop.
	j variable is for using in inner for loop.
	no variable is for using to store number of rows.
	*/
	
	// Let's take the number of rows from user.
	printf("Enter the number of rows::");
	scanf("%d",&no);
	
	/*
	To print the pattern we will use two for loops, one as a outer for loop 
	and another one as a inner for loop.
	*/
	for(i=1;i<=no;i++)
	{
		// It is our outer for loop.
		// It will take new line after inner for loop.
		
		for(j=1;j<=no;j++)
		{
			// It is our inner for loop.
			// It will print the cross pattern.
			if(i==j || (i+j-1)==no)	// || is logical or operator.
			printf("*");
			
			else 
			printf(" ");
		}
		
		// Now in outer for loop let's take new line.
		printf("\n");
	}
	
	
	printf("\nLIKE, SHARE AND SUBSCRIBE THE CHANNEL\nMR SQUARE");
}




