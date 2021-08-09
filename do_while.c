//printing numbers from n to 1 using do while loop
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the range to display the numbers:");
	scanf("%d",&n);
	printf("The numbers from %d to 1:\n",n);
	do
	{
		printf("%d\n",n);
		n--;
	}while(n>=1);
}
