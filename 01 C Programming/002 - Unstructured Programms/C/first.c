#include<stdio.h>
void fact()
{
	int no;
	printf("enter a number ");
	scanf("%d",&no);
	int fact=1,ans,i;
	for(i=no;i>0;i--)
	{
		fact=fact*i;
	}
	ans=fact;
	printf("FACTORIAL = %d",ans);
}
void main()
{
	
	fact();
}