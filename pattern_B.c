/*
Author : Vinit Patel.
Program to print the following pattern

              *
             * *
            * * *
           * * * *
          * * * * *
*/
#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i + 1; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
