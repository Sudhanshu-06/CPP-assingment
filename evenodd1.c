#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if((n/2)*2==n)
    {
        printf("No is even");
    }
    else{
        printf("No is odd");
    }
    return 0;
}
