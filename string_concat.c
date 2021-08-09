//no output

#include<stdio.h>
void main()
{
	char a[100],b[100],c[100];
	int i,length1=0,length2=0;
	printf("Enter the first string:");
	gets(a);
	printf("Enter the second string:");
	gets(b);
	printf("The strings after concatenation:");
	for(i=0;a[i]!="\0";i++)
	{
		length1++;
	}
	for(i=0;b[i]!="\0";i++)
	{
		length2++;
	}
	printf("%d %d",length1,length2);
}
