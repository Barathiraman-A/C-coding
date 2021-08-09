//printing the given number in ascending and descending order
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers that are to be displayed in ascending and descending order:");
	scanf("%d %d %d",&a,&b,&c);
	printf("\nThe Ascending order:\n");
	if(a<b && a<c)
	{
		printf("%d\t",a);
		if(b<c)
			printf("%d\t%d",b,c);
		else
			printf("%d\t%d",c,b);
	}
	else if(c<b && c<a)
	{
		printf("%d\t",c);
		if(a<b)
			printf("%d\t%d",a,b);
		else
			printf("%d\t%d",b,a);
	}
	else if(b<c && b<a)
	{
		printf("%d\t",b);
		if(a<c)
			printf("%d\t%d",a,c);
		else
			printf("%d\t%d",c,a);
	}	
	printf("\nThe Descending order:\n");
	if(a>b && a>c)
	{
		printf("%d\t",a);
		if(b>c)
			printf("%d\t%d",b,c);
		else
			printf("%d\t%d",c,b);
	}
	else if(c>b && c>a)
	{
		printf("%d\t",c);
		if(a>b)
			printf("%d\t%d",a,b);
		else
			printf("%d\t%d",b,a);
	}
	else if(b>c && b>a)
	{
		printf("%d\t",b);
		if(a>c)
			printf("%d\t%d",a,c);
		else
			printf("%d\t%d",c,a);
	}	
}
