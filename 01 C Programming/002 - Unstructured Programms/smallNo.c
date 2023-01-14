//	Finding Smallest Number using Array

#include<stdio.h>
void main ()
{
	// In this program we will find out the smallest number among the 
	// given numbers using array.
	
	int no,i;
	float small;
	/*
	no is for storing size of array.
	i is for using in for loop.
	small is for storing smallest number.
	*/
	
	// Let's take size of array from user.
	printf("How many numbers you want to compare::");
	scanf("%d",&no);
	
	// Now we will declare an array of size no for storing numbers.
	float ar[no];
	// We are taking ar as a float so that user can enter integers or float No.
	
	// Now we will take numbers from user.
	printf("Enter the numbers\n");
	
	// to take the numbers from user we will use for loop.
	for(i=0;i<no;i++)
	scanf("%f",&ar[i]);
	
	// Now we will consider that ar[0] is smallest.
	small = ar[0];
	
	// Now we will compare all elements with small variable, if any element
	// will be smaller than small then we will store that element in small.
	for(i=1;i<no;i++)
	{
		if(ar[i]<small)
		small = ar[i];
	}
	
	// Now we will print the smallest number.
	printf("Smallest Number = %.2f",small);
	
	
	
	printf("\nLIKE,SHARE AND SUBSCRIBE THE CHANNEL\nMR SQUARE");
	
	
	
	
	
	
}
