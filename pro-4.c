#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a Number of N:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("% d ",2*i-1);
        i++;
    }
    return 0;
}
