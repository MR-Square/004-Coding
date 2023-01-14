// Merge Sort in C

#include<stdio.h>
#include<stdlib.h>
int n;		// for storing how many numbers user want to sort.
void Divide(int A[],int low,int high);
void Combine(int A[], int low,int mid, int high);

void main()
{
	int i,low,high;
	/*
	i is for using in for loop.
	low is for storing lowest index of array.
	high is for storing highest index of array.
	*/
	
	// Let's take how many numbers user want to sort.
	printf("How many numbers you want to sort::");
	scanf("%d",&n);
	
	int A[n];
	// A[] is for storing numbers which have to sort.
	
	// Let's take the numbers from user.
	for(i=0;i<n;i++)
	{
		printf("Enter the element%d::",i+1);
		scanf("%d",&A[i]);
	}
	
	low = 0;
	high = n-1;
	
	Divide(A,low,high);	// calling divide function.
	
	// Now let's print sorted array.
	for(i=0;i<n;i++)
	printf("%d\t",A[i]);
}

void Divide(int A[],int low,int high)
{
	// This function is for dividing array into two sub array.
	int mid;
	// mid is for storing middle index of array.
	
	// Let's divide the array.
	if(low<high)
	{
		mid = (low+high)/2;
		Divide(A,low,mid);		// calling function for left sub array(LSA)
		Divide(A,mid+1,high);	// calling function for right sub array(RSA)
		Combine(A,low,mid,high);
	}
	
}

void Combine(int A[],int low,int mid,int high)
{
	// This function is for combining sub arrays.
	int temp[n],i,j,k;
	/*
	temp[] is for storing sorted elements.
	i and j are for using as a indeces of array A.
	k is for using as a index of array temp.
	*/
	
	k = low;
	i = low;
	j = mid+1;
	/*
	value of k will go from 0 to high.
	value of i will go from low i.e 0 to mid.
	value of j will go from mid+1 to high i.e n-1.
	*/
	
	// Let's sort the elements.
	while(i <=mid && j <=high)
	{
		if(A[i] <= A[j])
		{
			temp[k] = A[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = A[j];
			j++;
			k++;
		}
	}
	
	while(i<=mid)
	{
		// for remaining element of LSA if present.
		temp[k] = A[i];
		i++;
		k++;
	}
	
	while(j<=high)
	{
		// for remaining elements of RSA if present.
		temp[k] = A[j];
		j++;
		k++;
	}
	
	for(k=low;k<=high;k++)
	A[k] = temp[k];
}











