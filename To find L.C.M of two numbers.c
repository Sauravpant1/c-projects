#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    if(a%2==0 && b%2==0 &&a>b)
    {
        printf("%d is the L.C.M of %d and %d",a,a,b);
    }
    else if (a%2==0 && b%2==0 && a<b)
    {
        printf("%d is the L.C.M of %d and %d",b,a,b);
    }
     else 
    {
        int c = a*b;
        printf("%d is the L.C.M of %d and %d",c,a,b);
    } 

    


    return 0;
}