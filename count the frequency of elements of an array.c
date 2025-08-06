#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the amount of number required");
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    printf("enter the numbers :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=0;
    }
    printf("\nElement : Frequency\n");
    for ( i = 0; i < n; i++)
    {
        if (freq[i]==1)
        {
            continue;
        }
        int count = 1;
        for ( j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j]=1;
            }
            
        }
        printf("%d %d\n",arr[i] , count);
    }
    return 0;
}