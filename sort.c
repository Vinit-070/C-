/*
Author : Vinit Patel.
Write a Program to sort an integer array in ascending order.
*/
#include <stdio.h>
int main()
{
    int a[5], i, n, j, temp;
    printf("Enter Size : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter number : ");
        scanf("%d", &a[i]);
    }
    printf("Ascending order : ");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d ", a[i]);
    }
    return 0;
}