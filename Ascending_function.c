#include<stdio.h>
void asc(int arr[],int);
int main()
{	
	int n;
	printf("enter how many numbers :\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the numbers :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	
	asc(arr,n);
	
	return 0;
}
void asc(int arr[],int n)
{
	int temp,i,j;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}
	printf("sorted numbers are :\n");
	for(int i=0;i<n;i++)
	{
	    printf("%d\n",arr[i]);
	}
}