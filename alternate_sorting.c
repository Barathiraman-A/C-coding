//alternate sorting - First element is first maximum second element is first minimum and so on
#include<stdio.h>
void main()
{
	int a[100],n,i,j,max,min;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(i%2)
			{
				if(a[i]>a[j])
				{
					a[i]=a[i]+a[j]-(a[j]=a[i]);	
				}
			}
			else
			{
				if(a[i]<a[j])
				{
					a[i]=a[i]+a[j]-(a[j]=a[i]);	
				}
			}
		}
	}
	printf("the resultant array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
