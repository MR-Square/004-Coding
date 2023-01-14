//	Function in C Language

/*
Function :
		Set of statements to performe any task is called function. All C program
		contain at least one function which is main() function.
*/

/*
Function's Structure : 
	returnType Function'name (arguments)
	{
		// codes.
	}
*/

/*
Return Type: It is the value returned before a function completes its execution
ans exits.

Function Name: It is our choise means we can give any name to the function.

() : After giving the name to function we have to use ().In this we write 
arguments.

{} : In this bracket we write our actual codes.

Note : In our program there should be one function whose name should be main.
*/


// In this program we will write one more function to add two numbers and call
// that function in our main function.

#include<stdio.h>
void add(int a,int b)
/*
void is return type of add function.
add is the name of function.
a,b are the arguments.We have to use data type for each arguments.No need to 
take same name of arguments and variable whose value is going to store in 
arguments.
*/
{
	int ans;
	ans = a + b;
	printf("sum = %d",ans);	
}

void main ()
{
	// This is our main function.Execution of program will be start from here.
	
	int no1,no2;
	/*
	no1 is for storing first number given by user.
	no2 is for storing second number given by user.
	*/
	
	// Let's take both number from user.
	printf("Enter first number:");
	scanf("%d",&no1);
	printf("Enter second numbr:");
	scanf("%d",&no2);
	
	// Now we will call the add function here.
	add(no1,no2);	// This step is called calling to a function
}



