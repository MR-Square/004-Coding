
// HELLO GUYS WELCOME TO MY CODE.In this programme we will find the winner of the race.
// The condition is that the racer whose speed is more than the speed of avg and the other.
#include<stdio.h>
void main ()
{
    // we will declair an arry in which we will store the speeds of all racer
    float v[5]; 
    // Now we will take two varible one for avarage and another one for largest.
    float avg,large;
    int i;
    // Now we will give the speed of all racer from user.
    printf("Enter the speed of first racer:");
    scanf("%f",&v[0]);
    printf("Enter the speed of first racer:");
    scanf("%f",&v[1]);
    printf("Enter the speed of first racer:");
    scanf("%f",&v[2]);
    printf("Enter the speed of first racer:");
    scanf("%f",&v[3]);
    printf("Enter the speed of first racer:");
    scanf("%f",&v[4]);
    // As we know the formula of avarage we will apply it, ans we will store in avg variable
    avg = (v[0]+v[1]+v[2]+v[3]+v[4])/5;
    // We will consider avg as largest.
    large=avg;
    printf("Avg = %.3f\n",avg);
    for(i=0;i<5;i++)
    {
        if(v[i]>large)
        large = v[i];
    }
    printf("Race will be winned by the racer whose speed is %.2f\n",large);

}