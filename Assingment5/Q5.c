#include<stdio.h>
int main()
{
    int n;
    printf("Enter the odd natural in reverse order:");
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    {
        printf("%d\n",2*i-1);
    }
}
