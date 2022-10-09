/* Author : Vinit Patel.
   Write a program to check whether the number is odd or even. (if else) 
*/
#include<stdio.h>
void main()
{
     int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    
    if (num%2==0)
    {
        printf("%d is an even number.",num);
    }
    else
    {
         printf("%d is an odd number.",num);
    }
}