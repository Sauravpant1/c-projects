#include<stdio.h>
int facto(int);
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	int f = fibo(n);
	printf("%d",f);
	return 0;
}
int facto(int n)
{
	int f=1;
	for (int i = 1; i <= n; ++i)
	{
		f=f*i;

	}
	return f;
}