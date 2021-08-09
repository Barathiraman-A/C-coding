//Concatenating the strings without using function
#include<stdio.h>
void main()
{
	char s1[100],s2[100],s3[100];
	int i,j,length1=0,length2=0;
	printf("Enter the first string:");
	scanf("%s",s1);
	printf("\nEnter the second string:");
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++)
	{
		length1++;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		length2++;
	}
	for(i=0;i<length1;i++)
	{
		s3[i]=s1[i];
	}
	s3[length1]=' ';
	i++;
	for(j=0;j<length2;j++)
	{
		s3[i]=s2[j];
		i++;
	}
	s3[length1+length2+1]='\0';
	printf("\nThe concatenated string: %s",s3);
}
