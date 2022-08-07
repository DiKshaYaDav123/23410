#include<stdio.h>
int main()
{
    int i=10,n;
    printf("Enter a number of N:");
    scanf("%d",&n);
    while(i>=n)
    {
        printf(" %d ",i);
        i--;
    }
    return 0;

}
