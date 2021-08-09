//Printing the first non-repeating character in a string
//wrong output
#include<stdio.h>
void main()
{
	char string[1000];
	int i,j,length=0,flag;
	printf("Enter the string:");
	scanf("%s",&string);
	for(i=0;string[i]!='\0';i++)
	{
		length++;
	}
	for(i=0;i<length-1;i++)
	{
		for(j=i+1;j<length;j++)
		{
			if(string[i]==string[j])
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
		}
		if(flag==1)
			continue;
		else
			printf("The first non-repeated character in the string is %c\n",string[i]);
			break;
	}
}

