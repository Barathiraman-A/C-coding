//Matrix addition
#include<stdio.h>
void main()
{
	int rows,cols;
	int i,j;
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	printf("Enter the number of cols:");
	scanf("%d",&cols);
	int a[rows][cols],b[rows][cols],c[rows][cols];
	printf("Enter the elements of first matrix:");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of second matrix:");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The matrix after addition:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}	
}
