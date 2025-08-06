#include<stdio.h>
int fibo(int , int , int);
int main()
{
	int n;
	printf("Enter any number :\n");
	scanf("%d",&n);
	fibo(0,1,n);
	return 0;
}
int fibo(int a,int b,int n)
{
	if(n!=0)
	{
		printf("%d\n",a);
		return fibo(b,a+b,n-1);
	}

}