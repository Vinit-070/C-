/* Author : Vinit Patel
    Program to read marks from keyboard and display equivalent
    grade according to following table (if else ladder)
       | Marks       |    Grade        |
       | 100 - 80    |    Distinction  |  
       | 79 - 60     |    First Class  |     
       | 59 - 40     |    Second Class |        
       | < 40        |    Fail         |       
*/ 
#include<stdio.h>
void main()
{
     int a;
    printf("Enter your marks : ");
    scanf("%d", &a);
    
    if (a>=40 && a<=59)
    {
       printf("Grade : Second Class \n");
    }
    else if (a>=60 && a<=79)
    {
        printf("Grade : First Class \n");    
    }
    else if (a>=80 && a<=100)
    {
        printf("Grade : Distinction \n");
    }
    else if (a>=0 && a<40)
    {
        printf("Grade : Failed \n");
    }
    else
    {
        printf("Please Enter Your Correct Marks !\n");
    }

}