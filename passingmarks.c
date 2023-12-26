#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int marks;
    printf("Enter the marks of the five Subject:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a>=33&& b>=33 && c>=33 && d>=33 && e>=33)
    {
        printf("Candidate passed");
    }
    else{
        printf("Candidate failed");
    }
    return 0;

}
