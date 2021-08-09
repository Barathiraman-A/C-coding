//Largest among three numbers using ternary operator
#include<stdio.h>
void main()
{
	int a,b,c,largest;
	printf("Enter the numbers:");
	scanf("%d %d %d",&a,&b,&c);
	largest=(a>b&&a>c)?a:((b>c&&b>a)?b:c);
	printf("\nThe largest among the three given numbers is %d",largest);
}
