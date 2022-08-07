#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a Number of N:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf(" %d ",i*i);
        i++;
    }
    return 0;
}
