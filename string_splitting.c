//no output

#include<stdio.h>
#include<string.h>
void main()
{
	char string[1000];
	int i,length=0;
	printf("Enter a sentence:");
	gets(string);
	for(i=0;string[i]!="\0";i++)
	{
		length++;
	}
	for(i=0;i<length;i++)
	{
		if(string[i]==" ")
		{
			printf("\n");
		}
		else
		{
			printf("%c",string[i]);
		}
	}
}

