#include<stdio.h>
int rec(int);
int main()
{
	printf("%d",rec(4))
	return 0;
}
int rec(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return 7+rec(n-2);
	}
}