//Reversing the given word
#include<stdio.h>
void main()
{
	char s1[100],temp;
	int i=0,j,length=0;
	printf("Enter the string to be reversed:");
	scanf("%[^\n]*c",&s1);
	while(s1[i]!='\0')
	{
		length++;
		i++;
	}
	//printf("%d",length);
	for(i=0,j=length-1;i<=j;i++,j--)
	{
		temp=s1[i];
		s1[i]=s1[j];
		s1[j]=temp;
	}
	printf("\nThe reverse string is %s",s1);
}
