#include<stdio.h>
void fibo(int);
int main()
{
    int n;
    printf("enter how many numbers :");
    scanf("%d",&n);
    fibo(n);
    
    return 0;

}
void fibo(int n)
{
    int a=1,b=1,c;
    printf("%d \n %d \n",a,b);
    for(int i=3;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }       
}
