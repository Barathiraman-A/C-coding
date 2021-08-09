//matrix multiplication
#include<stdio.h>
void main()
{
	int rows1,cols1,rows2,cols2;
	int i,j,k;
	printf("Enter the number of rows for the first matrix:");
	scanf("%d",&rows1);
	printf("Enter the number of cols for the first matrix:");
	scanf("%d",&cols1);
	printf("Enter the number of rows for the second matrix:");
	scanf("%d",&rows2);
	printf("Enter the number of cols for the second matrix:");
	scanf("%d",&cols2);
	if(cols1!=rows2)
	{
		printf("Enter the number of rows for the first matrix again:");
		scanf("%d",&rows1);
		printf("Enter the number of cols for the first matrix again:");
		scanf("%d",&cols1);
		printf("Enter the number of rows for the second matrix again:");
		scanf("%d",&rows2);
		printf("Enter the number of cols for the second matrix again:");
		scanf("%d",&cols2);
	}
	int a[rows1][cols1],b[rows2][cols2],result[rows1][cols2];
	printf("Enter the elements of first matrix:");
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<cols1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of second matrix:");
	for(i=0;i<rows2;i++)
	{
		for(j=0;j<cols2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The matrix after multiplication:\n");
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<cols2;j++)
		{
			result[i][j]=0;
			for(k=0;k<cols1;k++)
			{
				result[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<cols2;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}	
}

