#include<stdio.h>
#include<stdlib.h>
int n;
void main();
void divide(int a[],int low,int high);
void combine(int a[],int low,int mid,int high);
void display(int a[]);

void main()
{
	int i,low,high;
	printf("enter size of array::");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter element::");
		scanf("%d",&a[i]);
	}
	
	low = 0;
	high = n-1;
	
	divide(a,low,high);
	display(a);
}

void divide(int a[],int low, int high)
{
	int mid;
	
	if(low < high)
	{
		mid = (low+high)/2;
		divide(a,low,mid);		// for LSA
		divide(a,mid+1,high);	// for RSA
		combine(a,low,mid,high);
	}
}

void combine(int a[], int low, int mid, int high)
{
	int temp[n];
	int i,j,k;
	i = low;
	k = low;
	j = mid+1;
	
	while(i <= mid && j <= n-1)
	{
		if(a[i] <= a[j])
		{
			temp[k] = a[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = a[j];
			j++;
			k++;
		}
	}
	
	while(i<=mid)
	{
		temp[k] = a[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		temp[k] = a[j];
		j++;
		k++;
	}
	
	for(i=0;i<n;i++)
	a[i] = temp[i];
		
}

void display(int a[])
{
	int i;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}








