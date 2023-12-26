#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);

    if(a>0)
    {
        printf("Positive number");
    }
    if(a<=0)
    {
        printf("Non positive number");
    }
    printf("\n");
    return 0;
}