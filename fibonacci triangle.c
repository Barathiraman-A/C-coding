#include<stdio.h>
void main()
{
	int a=0,b=1,c=0;
	int i=0,j,n;
	printf("Enter the limit of fibonacci sequence:");
	scanf("%d",&n);
	while(i<n)
	{
		a=0;
		b=1;
		printf("%d ",b);
		for(j=0;j<i;j++)
		{
			c=a+b;
			printf("%d ",c);
			a=b;
			b=c;
		}
		printf("\n");
		i++;	
	}
}
