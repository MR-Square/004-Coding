//	Printing Star Pattern

#include<stdio.h>
void main ()
{
	// From now onwards we will see the programs of star patterns.
	
	// In this programme we will see the basic star pattern.
	// We will print pattern of 3 rows and 4 coloumn.
	
	int i,j;
	// i will be use for number of rows.
	// j will be use for number of coloumn.
	
	// Let's print the pattern.
	
	/*
	For printing the pattern we will use two for loops, one as a outer for loop 
	and another one as a inner for loop.
	*/
	for(i=1;i<=3;i++)
	{
		// It is our outer for loop.It is for number of rows.
		
		for(j=1;j<=4;j++)
		{
			// It is our inner for loop.It is for number of column and printing the
			// star.
			printf("*");
		}
		
		// Now in outer for loop we will take new line after completing the inner 
		// for loop at every times.
		printf("\n");
	}
}
