#include<stdio.h>
void main ();
void num(int a[]);

void main()
{
	int ar[] = {1,2,3,4};
	num(ar);
}


void num(int a[])
{
	int i;
	for(i=0;i<4;i++)
	printf("%d\t",a[i]);
}

