/*  Author : Vinit Patel.
    Write a program to design basic calculator.
*/
#include<stdio.h>
void main()
{    
    float a,b,add,sub,mul,div;
    printf("Enter First Number : ");
    scanf("%f", &a);
    printf("Enter Second Number : ");
    scanf("%f", &b);
    
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    printf("%.2f + %.2f =  %.2f\n",a,b,add);
    printf("%.2f - %.2f =  %.2f\n",a,b,sub);
    printf("%.2f x %.2f =  %.2f\n",a,b,mul);
    printf("%.2f / %.2f =  %.2f\n",a,b,div);
    
}
