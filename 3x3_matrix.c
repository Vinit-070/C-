/*   Author : Vinit Patel.
    Write a program to perform addition of two 3*3 matrices.
*/
#include <stdio.h>
int main()
{
    int mat1[3][3], mat2[3][3], i, j, mat3[3][3];
    printf("Enter Elements of First Matrix: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("Enter Elements of Second Matrix: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &mat2[i][j]);
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            mat3[i][j] = mat1[i][j] + mat2[i][j];
    }
    printf("Addition Result of Two Given Matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", mat3[i][j]);
        printf("\n");
    }
    return 0;
}