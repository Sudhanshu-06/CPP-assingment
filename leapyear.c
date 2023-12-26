//Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf(" %d year is a leap year",year);
    }
    else if(year%400==0)
    {
        printf(" %d year is a leap year",year);
    }
    else if(year%100==0){
        printf("%d year is not leap year",year);
    }
    else{
        printf("%d Year is not leap year",year);
    }
    return 0;
}
