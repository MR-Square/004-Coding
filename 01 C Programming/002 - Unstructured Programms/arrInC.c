//	Array in C

#include<stdio.h>
void main ()

{
	// Array is the collection of similar data type items stored at 
	// contiguous memory location.
	
	// Data type of array can be int, float or char.
	
	// Let's declare an array of integer type.
	
	int arr[4];
	// Here size of array is 4 means we can store 4 integers in arr array.
	
	// Now let's initialize arr array.
	arr[0] = 20;
	arr[1] = -64;
	arr[2] = 20;
	arr[3] = -99;
	// Since size of arr is 4 therfore its last index will be 3.
	
	// If array size is 'n' then its last index will be 'n-1'.
	
	// Now we will declare and initialize a float type array.
	float arr1[3] = {12.5,-7.6,100.6};
	
	// This is the another type of initalization.
	// In this type we don't need to give size of array.
	
	float arr2[] = {1.1,2.2,-3.3,4.4,-5.5};
	
	// Now we will declare character type array.
	char arr3[3];
	
	// Now let's see how to initialize char array.
	arr3[0] = 'a';
	arr3[1] = 'b';
	arr3[2] = 'c';
	
	// To print all elements we use for loop.
	int i;	// This is for for loop.
	
	// Firs we will print the elements of arr array.
	printf("Elements of arr array are:\n");
	for(i=0;i<4;i++)
	printf("arr[%d] = %d\n",i,arr[i]);
	
	// Now we will print the elements of arr1 array.
	printf("Elements of arr1 array are:\n");
	for(i=0;i<3;i++)
	printf("arr1[%d] = %.2f\n",i,arr1[i]);
	
	// Now we will print the elements of arr2 array.
	printf("Elements of arr2 array are:\n");
	for(i=0;i<5;i++)
	printf("arr2[%d] = %.2f\n",i,arr2[i]);
	
	// Now we will print the elements of arr3 array.
	printf("Elements of arr3 array are:\n");
	for(i=0;i<3;i++)
	printf("arr3[%d] = %c\n",i,arr3[i]);
	
	
	printf("\nLIKE,SHARE AND SUBSCRIBE THE CHANNEL\nMR SQUARE");
	
	
	
	
	
}
