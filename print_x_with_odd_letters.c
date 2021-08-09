//printing the word with odd letters in x pattern
#include<stdio.h>
void main()
{
	char str[100];
	int i,j,k,n=0;
	printf("Enter the string:");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		n+=1;
	}
	for(i=0,j=n-1;i<n,j>=0;i++,j--)
	{
		if(i<j)
		{
			for(k=0;k<i;k++)
			{
				printf(" ");
			}
			printf("%c",str[i]);
			for(k=0;k<j-i-1;k++)
			{
				printf(" ");
			}
			printf("%c\n",str[j]);
		}
		else if(i==j)
		{
			for(k=0;k<i;k++)
			{
				printf(" ");
			}
			printf("%c\n",str[i]);
		}
		else if(i>j)
		{
			for(k=0;k<j;k++)
			{
				printf(" ");
			}
			printf("%c",str[j]);
			for(k=0;k<i-j-1;k++)
			{
				printf(" ");
			}
			printf("%c\n",str[i]);
		}
	}
}
