#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no: ");
    scanf("%d",&n);
    for(int i=n; i>1; i=i-2)
    {
        printf("%d ",i);
    }
}
