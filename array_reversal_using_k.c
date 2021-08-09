//given an array ,write a functionn to reverse every set of k numbers
//modify the same array without recreating another array
//reverse the remaining array even if it is less than k
#include<stdio.h>
void main()
{
	int array[100];
	int n,i,k;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the value of k:");
	scanf("%d",&k);
	reverse(array,n,k);
	printf("The resultant array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
}
void reverse(int array[],int n,int k)
{
	int i;
	for(i=0;i<n;i+=k)
	{
		int left=i;
		int temp;
		int right=minimum(i+k-1,n-1);
		while(left<right)
		{
			temp=array[left];
			array[left]=array[right];
			array[right]=temp;
			left++;
			right--;
		}
	}
}
int minimum(int a,int b)
{
	if(a>b)
		return b;
	else
		return a;
}

