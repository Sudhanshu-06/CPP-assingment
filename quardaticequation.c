//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d,root1,root2;
    printf("Enter the value of a,b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)
    {
        root1=(-b )/(2*a);
        root2=root1;
        printf("roots are real and equal, Root1=%f, Root2=%f", root1,root2);
    }
    else if(d>0)
    {
        root1=-(b+ sqrt(d)/(2*a));
        root2=-(b- sqrt(d)/(2*a));
        printf("rots are real and distinct, Root1=%f, Root2=%f",root1, root2 );
    }
    else{
        printf("roots are imaginary");
    }
    return 0;
}
