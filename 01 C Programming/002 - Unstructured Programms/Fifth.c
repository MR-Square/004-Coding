//		Area of Rectangle
#include<stdio.h>
void main ()
{
	// We will take length and breath from user.
	// So we will declare three variables.
	int l,b,A;
	// l is for length.
	// b is for breath.
	// A is for area.
	
	printf("Enter length::");
	scanf("%d",&l);
	printf("Enter breath::");
	scanf("%d",&b);
	
	A = l*b;
	printf("AREA of rectangle is %d",A);
}
