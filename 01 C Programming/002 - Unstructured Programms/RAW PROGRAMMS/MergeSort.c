// Merge Sort in C
#include<stdio.h>
#include<stdlib.h>
int n;		// for storing how many numbers user want to sort.
void MergeSort(int A[],int low,int high); 	
void Display(int A[]);	
void Combine(int A[],int low,int mid,int high);

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
    
    low=0;         // Lowest index of Array
    high=n-1;     // Highest index of Array
    
    MergeSort(A,low,high);	// calling the function.
    Display(A);		// calling the function.
}

void MergeSort(int A[],int low,int high)
{
	// This function is for dividing the array into two parts.
    int mid;
    // mid is for storing middle index of array.
    
    // Let's divid the array into two sub arrays.
    if(low<high)
    {
        mid=(low+high)/2;
        MergeSort(A,low,mid); 		// For Left Sub Array (LSA)
        MergeSort(A,mid+1,high);	// For Right Sub Arrar (RSA)
        Combine(A,low,mid,high);	// calling combine function.
    }
}

void Combine(int A[],int low,int mid,int high)
{
	// This function is for combining two sub arrays.
	
    int temp[n],i,j,k;
    /*
	temp is for storing sorted elements.
	i and j are for using as a indices of array A.
	k is for using as a index of array temp.
	*/
    
    k=low;
    i=low;
    j=mid+1;
    
    // Let's sort the elements.
    while (i<=mid && j<=high) 
    {
        if(A[i]<=A[j])
        {
            temp[k]=A[i];
            i++;
            k++;
        }       
        else
        {
            temp[k]=A[j];
            j++;
            k++;
        } 
    }

    while (i<=mid) 
    {
		// For remaining Element of LSA
        temp[k]=A[i];
        i++;
        k++;
    }

    while (j<=high)
    {            
		// For remaining Element of RSA
        temp[k]=A[j];
        j++;
        k++;
    }

	
    for(k=low;k<=high;k++)
        A[k]=temp[k];  
}

void Display(int A[])
{
	// This function is for printing the sorted array.
    int i;
    printf("Numbers after sorting are:\n"); 
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
}

