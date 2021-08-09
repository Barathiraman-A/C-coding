#include<stdio.h>
void main()
{
	float p,n,r,SI;
	printf("Enter the principal amount:");
	scanf("%f",&p);
	printf("\nEnter the rate of interest:");
	scanf("%f",&r);
	printf("\nEnter the time period in years:");
	scanf("%f",&n);
	SI=(p*n*r)/100;
	printf("\nThe simple interest is %f",SI);
}
