#include<stdio.h>
void knapsack();
int main()
{
int n,cap;
printf("Enter the number of weights");
scanf("%d",&n);
printf("Enter the capacity");
scanf("%d",&cap);
float wt[n],prof[n];
float ratio[n];
printf("Enter the weights and its  profit");
for(int i=0;i<n;i++)
{
	scanf("%f %f",&wt[i],&prof[i]);
	ratio[i]=prof[i]/wt[i];
	printf("before sort %f\n",ratio[i]);
	
}
float temp=0;

for(int i=0;i<=n;i++)
{
	for(int j=i+1;j<=n-1;j++)
	{
		if(ratio[i]<ratio[j])
		{
			temp=ratio[i];
			ratio[i]=ratio[j];
			ratio[j]=temp;
			
			temp=wt[i];
			wt[i]=wt[j];
			wt[j]=temp;
			
			temp=prof[i];
			prof[i]=prof[j];
			prof[j]=temp;
			
		}
	}
	
}


knapsack(n,wt,prof,cap);

			
return 0;

}

void knapsack(int n,float WT[],float PROF[],int cap)
{
	
	int i;
	float x[n],tp=0,c;
	c=cap;
	
	for(i=0;i<=n-1;i++)
	{
		
		if(WT[i]>c)
		break;
		
		else
		{
			c=c-WT[i];
			tp=tp+PROF[i];
			x[i]=1;
			
		}
		
	}
	if(i<n)
	{
		x[i]=c/WT[i];
		tp=tp+PROF[i]*x[i];
	}
	
	
	for(int i=0;i<=n-1;i++)
	{
		printf("%f\n",x[i]);
	}
	printf("The profit is %f",tp);
	
	
}
