/*
Author : Vinit Patel.
Program to print the following pattern

    A A A A A
    B B B B
    C C C
    D D
    E
*/

#include <stdio.h>
int main()
{
    int i, j;
    char input, alphabet = 'A';
    printf("Enter the letter of last row: ");
    scanf("%c", &input);
    for (i = (input - 'A' + 1); i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%c ", alphabet);
        }
        ++alphabet;
        printf("\n");
    }
    return 0;
}
