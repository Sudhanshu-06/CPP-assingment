#include<stdio.h>
#include<conio.h>
int main()
{

    int x;
    printf("Enter the three digit no:=");
    scanf("%d",&x);
    if(x>99 && x<999){
        printf("No is three digit");
    }
    else{
        printf("No is not digit ");
    }

    return 0;
}
