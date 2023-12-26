#include<stdio.h>
int main()

{
    char ch;
    printf("Enter the character");
    scanf("%c", &ch);
    if(ch>=64 && ch<=91)
    {
        printf("Uppercase");

    }
    else{
        printf("lowercase");
    }
    return 0;
}
