//Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("Number is divisible by 5");
    }
    else{
        printf("Number is not divisble  by 5");
    }
    return 0;
}
