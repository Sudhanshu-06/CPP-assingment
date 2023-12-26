#include<stdio.h>
int main()
{
    int Day,month, year;
    printf("Enter the date in DD/MM/YYYY format:\n");
    scanf("%d/%d/%d",&Day,&month,&year);
    printf("day- %d, month-%d, year-%d",Day,month,year);
    return 0;
}

