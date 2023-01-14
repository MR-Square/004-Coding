// Bubble Sort in C

#include<stdio.h>
void main ()
{
	// In this program we will see how to sort numbers using Bubble sort technique.
	
	int n,i,j,temp;
	/*
	n is for storing how many numbers have to sort.
	i is for using in for loop.
	j is for using in another for loop.
	temp is for storing number temporarily.
	
	*/
	
	// Let's take how many numbers user want to sort.
	printf("How many numbers you want to sort::");
	scanf("%d",&n);
	
	int a[n];
	// a[n] is for storing numbers which have to sort.
	// If you want to sort the decimal numbers also then take the data type of 
	// array as float.
	
	// Now let's take the numbers from user.
	for(i=0;i<n;i++)
	{
		printf("Enter element%d::",i+1);
		scanf("%d",&a[i]);
	}
	
	// Let's print the numbers before sorting.
	printf("Numbers before sorting are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		
	// Let's sort the numbers using bubble sort technique.
	for(i=0;i<n-1;i++)
	{
		// It is our outer for loop.
		// It will goes  upto second last element of array.
		for(j=i+1;j<n;j++)
		{
			// It is our inner for loop.
			// It will goes upto last element every time.
			
			// Every times this will bring the smallest element at index i.
			if(a[i] > a[j])
			{
				// Here we are just swapping two numbers.
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	// Now let's print the numbers after sorting.
	printf("\nNumbers after sorting are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		
}







