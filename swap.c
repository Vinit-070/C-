/* Author : Vinit Patel.
   Program to swap two numbers using third variable.
*/
#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);

    printf("\n");

    c=a;
    a=b;
    b=c;

    printf("After Swaping First Number : %d\n", a);
    printf("After Swaping Second Number : %d\n", b);
   
}
