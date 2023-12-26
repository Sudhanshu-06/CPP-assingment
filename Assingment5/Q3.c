#include<stdio.h>
int main()
{
    int n;
    printf("Print the natural no in reverse order:");
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    {
        printf("%d\n",i);
    }
}
