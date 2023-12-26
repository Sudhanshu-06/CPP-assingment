#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%3==0 && n%2==0)
    {
        printf("No is divisble by 2 and 3");
    }
    else{
        printf("Not divisible by 2 and 3");
    }
    return 0;
}
