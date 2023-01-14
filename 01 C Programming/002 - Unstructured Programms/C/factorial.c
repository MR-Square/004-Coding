#include<stdio.h>

void fact(int no)
{
	int fact=1,ans;
	for(int i =no;i>0;i--)
	{
		fact = fact *i;
	}
	printf("Factorial = %d",&fact);
}

void main()
{
	int no;
	printf("Enter the number::");
	scanf("%d",&no);
	fact(no);
}
