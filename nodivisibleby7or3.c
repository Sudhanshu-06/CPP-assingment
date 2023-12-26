#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%7==0){
        printf("no is divisible by7");
    }
    else if(n%3==0){
        printf("no is divisble by 3");
    }
    else{
        printf("not divisible");
    }
    return 0;
}
