#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    for(int i=200; i>=n; i--)
    {
        printf("%d ",i);
    }
}
