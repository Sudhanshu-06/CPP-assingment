#include<stdio.h>
int main()
{
    int n;
    printf("Enter the even the natural no:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("%d\n",2*i);
    }
}
