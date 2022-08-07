#include<stdio.h>
int main()
{
    int i=10,n;
    printf("Enter a Number of N:");
    scanf("%d",&n);
    while(i>=n)
    {
        printf(" %d ",2*i);
        i--;
    }
    return 0;
}
