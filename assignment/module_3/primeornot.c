//write a program to check given number is prime or not.
#include<stdio.h>
int main()
{
    int n,c=0,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("given number is prime");
    }
    else
    {
        printf("given number is not prime");
    }
    return 0;
}