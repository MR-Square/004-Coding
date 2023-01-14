//	INSERTION

#include<stdio.h>
void main ()
{
	// In this program we will arrange the numbers given by user in increasing order.
	
	int i,j,key,no;
	/*
	i variable is for using in for loop.
	j variable is for using in another for loop.
	key variable is for storing key element.
	no variable is for storing size of array.
	*/
	
	// Let's take the value of no variable from user.
	printf("How many numbers you want to arrange:");
	scanf("%d",&no);
	
	// Now we will declare an array for storing the numbers.
	int ar[no];
	
	// Let's take the numbers from user.
	printf("Enter the numbers\n");
	for(i=0;i<no;i++)
	scanf("%d",&ar[i]);
	
	// Now we will do calculation.
	for(i=1;i<no;i++)
	{
		key = ar[i];	// Taking key element.
		
		// Now we will compare key element with its left side element.
		// If that element will be bigger than key element we will shift
		// that element right side.
		
		for(j=i-1;ar[j]>key;j--)
		ar[j+1] = ar[j];	// shifting element right side.
		
		// After comparing and shifting as condition fail at j so j+1
		// index will be empty.So at index j+1 we will store the key element.
		ar[j+1] = key;
		
	}
	
	
	// Now we will print the numbers in increasing order.
	printf("Numbers in increasing order:\n");
	for(i=0;i<no;i++)
	printf("%d\t",ar[i]);
	
	printf("\nLIKE,SHARE AND SUBSCRIBE THE CHANNEL\nMR SQUARE");
	
	
	
	
	
	
	
}
