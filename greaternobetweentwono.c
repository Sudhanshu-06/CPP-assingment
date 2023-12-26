//Write a program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two number:");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("Both are equal");
    }
    else if(a>b){
        printf(" a is greater");
    }
    else{
        printf(" b is greater");
    }
    return 0;
}
