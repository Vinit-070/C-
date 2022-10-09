// Write a program to compute Fahrenheit from Centigrade 
#include <stdio.h>
void main() 
{

 float F,C;
 printf("Enter Temperature in Celsius : " );
 scanf("%f",&C);
 F = (C * 1.8) + 32;
 printf("Temperature in Fahrenheit : %.3f", F);

 }