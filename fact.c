/* Author : Vinit Patel
    Write a program to find factorial of a given number. (while loop)
*/

 #include<stdio.h>
 int main()
 {
    int n, i=1,  f=1;

    printf("Enter Number : ");
    scanf("%d", &n);

     while( i <= n ){  
            f = f * i;   
            i++; 
        }   
    printf("The Factorial of %d is : %d",n,f);
    return 0;
 }