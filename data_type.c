/*  Author : Vinit Patel.
    Write a program that reads variables with different data types and
    display their value.
*/ 
#include<stdio.h>
void main()
{
    int a;
    char b;
    float c;
    double d;
    printf("Enter any Integer : ");
    scanf("%d", &a);
    printf("Enter any Float : ");
    scanf("%f", &c);
    printf("Enter any Double : ");
    scanf("%lf", &d);
    printf("Enter any Character : ");
    scanf(" %c", &b); 
    printf("\n\n");

    printf("Integer = %d\n", a);
    printf("Character = %c\n",b);
    printf("Float = %f\n", c);
    printf("Double = %lf\n", d);
}
