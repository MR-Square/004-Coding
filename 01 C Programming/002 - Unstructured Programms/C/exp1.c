/*
Modular program to find the factorial, fibonacci and palindrome using Menu driven code.
.                                                       @ SHAIKH MOHD RAZA MOHD RAFIQUE,
.                                                       RollNo. 20CO53
.                                                       Academic Year. 2021-22
.                  Welcome to my C Programme.In this programme you can find the FACTORIAL of a no, FIBONACCI SERIES 
.    upto you want and you can also check whether a number is PALINDROME or not.
.    FACTORIAL:
.                It is the product of all positive integers less than or equal to a given positive integer. It is 
.            denoted by !.e.g. the factorial of 5 is 5*4*3*2*1=120 and denoted by 5!.
.    FIBONACCI:
.                It is a series of numbers in which each number ( Fibonacci number ) is the sum of the two 
.            preceding numbers.It starts from 0,1,1 and goes to infinity.It is found by an Italian Mathematician
.            Fibonacci also known as Leonardo Bonacci.
.    PALINDROME:
.            It is a number that remains same when its digits reversed.
*/

#include<stdio.h>
#include<stdlib.h>
void main();
/*
    In this programm we will declair 3 functions and one main function.
    One function for FACTORIAL.
    Second function for FIBONACCI.
    Third function for PALINDROME. 
*/
int fact()
{
    // This function is for FACTORIAL.In this fuction we will take a no from user and will find its factorial.
    int fact=1;
    int no,i;
    printf("Enter the number whose factorial you want:");
    scanf("%d",&no);
    // For solution we will use for loop.
    for(i=no;i>0;i--)
    {
        fact = fact * i; // This is our main line of solution.
    }
    return fact;
}
void fibo()
{
    // This function is for FIBONACCI.In this function we will take a no upto which series has printed.
    int no;
    int a=0,b=1,c;
    printf("How many no of elements of fibonacci you want: ");
    scanf("%d",&no);
    // As we know that the first two elements are 0 and 1 we will print it.
    printf("0\n1\n");
    // Condition me hum log i ki value ko no-2 tak le jae ge,q ki hum ne do elements print kar chuke hai. 
    for (int i=0; i<no-2; i++)
    {
        c=a+b;
        printf("%d\n",c);
        // now we will store the value of b in a and value of c in b.
        a=b;
        b=c;
    }
    // Now we will go back to our main function.
    main();
}
void pali()
{
    // This function is for PALINDROME.In this function we will take a no from user and check it whether it is 
    // palindrome or not.
    int no,i;
    int rem,new=0;
    printf("Which number you want to check :");
    scanf("%d",&no);
    i=no;
    while(i!=0)
    {
        // First we will take last digit of our main in a variable
        rem=i%10;
        // then we waill add it in a variable which will reveresed of main no.
        new=new*10+rem;
        // Then we will remove last digit of main no.
        i=i/10;
    }
    if (new==no)
    {
        printf("%d is a PALINDROME NO.\n",no);
    }
    else
    {
        printf("%d is  NOT PALINDROME NO.\n",no);
    }
    // Now we will go back to our main function.
    main();
    
}
void main ()
{
    int no;
    int ans;
    int i=1;
    /*
        We will write our menu and switch case in while loop, so that it will continuosly going on.
        In this programme we are adding a new header file i.e stdlib.h
        Now we can use exit function to stop our programme.
        Because we are used while loop which is responsible for continuoas running of programme.
    */
    while (i!=0)
    {
        printf("\n\n-----------------*****************----------------\n");
        printf("\t\tMENU\n");
        printf(" ----------------------\n");
        printf("| NO |  DESCRIPTION    |\n");
        printf(" ----------------------\n");
        printf(" ----------------------\n");
        printf("|  1  |  Factorial     |\n");
        printf(" ----------------------\n");
        printf(" ----------------------\n");
        printf("|  2  |  Fibonacci     |\n");
        printf(" ----------------------\n");
        printf(" ----------------------\n");
        printf("|  3  |  Palindrome    |\n");
        printf(" ----------------------\n");
        printf(" ----------------------\n");
        printf("|  4  |     Exit       |\n");
        printf(" ----------------------\n");
        printf("Enter the no for corrosponding function please:");
        scanf("%d",&no);
        switch (no)
        {
        case 1:
            ans = fact();
            printf("Factorial = %d",ans); 
            break;
        case 2:
            fibo();
            break;
        case 3:
            pali();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("You entered wrong no.\n");
            break;
        }
    }
}
/*
    CONCLUSION:
                It is a very best way to do so many task in a single programm.We can use menu driven form 
                so that user can select his/her required programm.After writing this programm we are able to 
                write programm using functions.
*/
/*
        OUTPUT:
                -----------------*****************----------------
                MENU    
 ---------------------- 
| NO |  DESCRIPTION    |
 ---------------------- 
 ---------------------- 
|  1  |  Factorial     |
 ---------------------- 
 ---------------------- 
|  2  |  Fibonacci     |
 ----------------------
 ----------------------
|  3  |  Palindrome    |
 ----------------------
 ----------------------
|  4  |     Exit       |
 ----------------------
Enter the no for corrosponding function please:1
Enter the number whose factorial you want:10
Factorial = 3628800

-----------------*****************----------------
                MENU
 ----------------------
| NO |  DESCRIPTION    |
 ----------------------
 ----------------------
|  1  |  Factorial     |
 ----------------------
 ----------------------
|  2  |  Fibonacci     |
 ----------------------
 ----------------------
|  3  |  Palindrome    |
 ----------------------
 ----------------------
|  4  |     Exit       |
 ----------------------
Enter the no for corrosponding function please:3
Which number you want to check :123
123 is  NOT PALINDROME NO.


-----------------*****************----------------
                MENU
 ----------------------
| NO |  DESCRIPTION    |
 ----------------------
 ----------------------
|  1  |  Factorial     |
 ----------------------
 ----------------------
|  2  |  Fibonacci     |
 ----------------------
 ----------------------
|  3  |  Palindrome    |
 ----------------------
 ----------------------
|  4  |     Exit       |
 ----------------------
Enter the no for corrosponding function please:
*/