//Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>99){
        printf("Number is three digit");
    }
    else{
        printf("Number is not three digit");
    }
    return 0;
}
