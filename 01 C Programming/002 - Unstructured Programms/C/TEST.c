//Hello guys welcome to my C Programms.In this programm we will see the calculator of equations.
//Lets start the coding

#include<stdio.h>
#include<math.h>
float a,b,c;

int linear()
{
    int a1,b1,c1;
    
    printf("ax + by = c\n");
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);


    //return main();
}
int quad()
{
    // float a,b,c;
    float delta;
    float ans1,ans2;
    printf("\tax² + bx + c =0\n");
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    delta = sqrt((b*b)-(4*a*c));
    ans1= (-b+delta)/(2*a);
    ans2= (-b-delta)/(2*a);
    printf("The roots of the eqn are %0.2f and %0.2f",ans1,ans2);
    //return main();
}
void main ()
{
    int no;
    while(1)
    {
        printf("\tMENU\n");
        printf("1.  Linear Eq.\n");
        printf("2.  Quadratic Eq.\n");
        printf("\t\tEnter the no::");
        scanf("%d",&no);
        switch (no)
        {
            case 1:
                linear();
                break;
            case 2:
                quad();
                break;
            default:
                printf("U ENTERED WRONG NO.\n");
                break;
        }
    }
}
// THANKS TO SEE MY CODES
// OWNER : M.R²
//  DATE : 25/10/2021