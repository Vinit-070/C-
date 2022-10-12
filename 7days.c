/* Author : Vinit Patel
    Write a program to read number 1 to 7 and print relatively day Sunday
    to Saturday. (switch case)
*/ 
#include <stdio.h>
int main()
{
    int ch;
    printf(" 1. Sunday\n 2. Monday\n 3. Tuesday\n");
    printf(" 4. Wednesday\n 5. Thursday\n 6. Friday\n 7. Saturday\n 8. Exit \n");
    do
    {
        printf("Enter Day no between 1-7 : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        case 8:
            printf("Bye\n");
            break;
        default:
            printf("Please Enter Proper Input\n");
            break;
        }
    } while (ch != 8);
    return 0;
}