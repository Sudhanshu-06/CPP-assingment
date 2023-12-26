#include<stdio.h>
int main()
{
    int n;
    printf("Enter the natural no in reverse order:");
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    {
        printf("%d",2*i);
    }
}
