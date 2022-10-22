/* Author : Vinit Patel
    Write a program to check whether the given number is prime or not. (do while loop)
*/
#include <stdio.h>
int main()
{
    int n, i = 2, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
        flag = 1;

    do
    {
        if ((n != 2) && (n % i == 0))
        {
            flag = 1;
            break;
        }
        i++;

    } while (i <= n / 2);

    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}