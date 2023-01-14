// Area of Triangle

#include<stdio.h>
void main ()
{
	// We will take hight and breath form user and print area of triangle.
	// So we will declare three variables of float data type.
	float h,b,A;
	// h is for hight.
	// b is for breath.
	// A is for area.
	
	printf("Enter hight:");
	scanf("%f",&h);
	printf("Enter breath:");
	scanf("%f",&b);
	
	A = (h*b)/2.0;
	printf("Area of Triangle is %.3f",A);
	
	/*
		%f = print as floating point.
		%5f = print as floating point, at least 5 characters wide.
		%.4f = printf as floating point, 4 charecters after decimal point.
		%5.4f = print as floating point, at least 5 wide and 4 after decimal point.
	*/
}
