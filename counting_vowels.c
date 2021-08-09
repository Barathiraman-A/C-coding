//Counting vowels in the string
#include<stdio.h>
void main()
{
	char string[100];
	int i,count=0,length=0;
	printf("Enter the string for counting the number of vowels in it:");
	scanf("%[^\n]*c",&string);
	for(i=0;string[i]!='\0';i++)
	{
		length++;
	}
	for(i=0;i<length;i++)
	{
		if(string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U'||
		string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u')
		{
			count++;
		}
	}
	printf("\nThe number of vowels in the given string: %d",count);
}
