#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a number upto which the even numbers are to be printed:");
	scanf("%d",&n);
	printf("The even numbers for 1 to %d:\n",n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			printf("%d\n",i);
	}
}
