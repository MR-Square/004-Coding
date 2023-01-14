#include<stdio.h>
#include<windows.h>
void main()
{
    int h,m,s;
    int d=900;
    printf("Enter Hour:");
    scanf("%d",&h);
    printf("Enter Minutes:");
    scanf("%d",&m);
    printf("Enter Seconds:");
    scanf("%d",&s);
    if(h>12 || m>59 || s>59)
    printf("ERROR\n");
    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(s>59)
        {
            h++;
            m=0;
        }
        if(s>59)
        {
            h=1;
        }
        printf("\nCLOCK\n");
        printf("%02d:%02d:%02d",h,m,s);
        _sleep(d);
        system("cls");
    }
}