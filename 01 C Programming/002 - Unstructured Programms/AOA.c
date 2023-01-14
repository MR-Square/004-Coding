#include<stdio.h>

void display(int ar[],int k)
{
	int i;
	for (i=0;i<k;i++)
	printf("%d\t",ar[i]);
}
void com(int ar[],int l,int h,int mid)
{
	int i=0,j,k=0;
	j = i+1;
	int arr[100];
	
	if(l!= h)
	{
		if(ar[i]<ar[j])
		{
			arr[k] = ar[i];
			arr[k+1] = ar[j];
		}
		else 
		{
			arr[k] = ar[j];
			arr[k] = ar[i];
		}
		i++;
		k++;
	}
	display(arr,k);
}

void fun1(int ar[],int l,int h)
{
	int mid;
	mid = (l+h)/2;
	if(mid != l)
	{
		fun1(ar,l,mid);
		fun1(ar,mid+1,h);
	}
	else 
	{
		com(ar,l,h,mid);
	}
}

void main()
{
	int n,i;
	
	printf("Enter the size of array::");
	scanf("%d",&n);
	
	int ar[n];
	
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
	
	fun1(ar,0,n-1);
}

