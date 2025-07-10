#include<stdio.h>
int main()
{
    int n , sum =0;
    do{
        printf("enter any number :");
        scanf("%d",&n);
        sum = sum+n;
    }while(n!=0);
    printf("The sum is :%d",sum);
    return 0;
}