//	Finding Largest Number

#include<stdio.h>
void main ()
{
	// In this program we will find out the largest number using array.
	
	int no,i;
	float large;
	// no is for storing size of array.
	// i is for using in for loop.
	// large is for storing largest number given by user.
	
	// Let's take size of array from user.
	printf("How many numbers you want to compare:");
	scanf("%d",&no);
	
	// Now we will declare an array for storing numbers given by user.
	float ar[no];
	// We are taking ar as a float so that user can enter float as well as
	// integer numbers.
	
	// Now we will take the number from user.
	printf("Enter the numbers\n");
	for(i=0;i<no;i++)
	scanf("%f",&ar[i]);
	
	// We will consider that ar[0] is largest.
	large = ar[0];
	
	// Now we will compare all elements with large, if that element will be 
	// larger than we will store it in large variable.
	
	for(i=1;i<no;i++)
	{
		if(ar[i]>large)
		large = ar[i];
	}
	
	printf("Largest Number = %.2f",large);
	
	printf("\nLIKE,SHARE AND SUBSCRIBE THE CHANNEL\nMR SQUARE.");
	
	
}
