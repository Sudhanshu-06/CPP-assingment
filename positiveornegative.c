//Write a program to check whether a given number is positive or non-positive
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    /*if(n>=1)
    {
        printf("positive");
    }
    else if(n==0){
        printf("non-positive");
    }
    else{
        printf("negative");
    }
    */
    if(n>0){
        printf("positive");
    }
    else{
        printf("Non positive");
    }
    return 0;
}
