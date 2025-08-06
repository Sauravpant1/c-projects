// #include<stdio.h>
// int sum(int ,int); //Function prototype or Declaration
// int main()
// {
//     int first,second;
//     printf("enter two numbers :");
//     scanf("%d %d",&first,&second); 
//     int add = sum(first,second); //Function call
//     printf("%d",add);
//     return 0;
// }
// int sum(int first , int second) //Function definition
// {
//     int addition= first + second;
//     return addition;
// }

// #include<stdio.h>
// int fact(int n);
// int a = 1;
// int main()
// {
//     int n;
//     printf("Enter any number :");
//     scanf("%d",&n);
//     int factorial = fact(n);
//     printf("%d",factorial);
//     return 0;
// }
// int fact(int n)
// {
//     for(int i=1;i<=n;i++)
//     {
       
//         a = a*i;
    
//     }
//     return a;
// }

#include<stdio.h>
int great(int a, int b);
int main()
{
    int a,b;
    printf("enter any two numbers :");
    scanf("%d%d ",&a,&b);
    great(a,b);
    
    return 0;
}
int great(int a, int b)
{
    if (a>b)
    {
        printf("%d is greater",a);
    }
    else if (b>a)
    {
        printf("%d is greater",b);
    }
    else
    {
        printf("Both are equal");
    }
    return 0;
}