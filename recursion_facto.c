#include<stdio.h>
int facto(int);			
int main()
{
	int n,f;
	printf("enter any number :");
	scanf("%d",&n);
	 f = facto(n);
	printf("%d",f);
	return 0;
}
int facto(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*facto(n-1);
	}
	
}