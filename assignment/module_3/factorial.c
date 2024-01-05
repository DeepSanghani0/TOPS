//Write a program to find out the factorial of given number using function
#include<stdio.h>
int fect(int no);

int main()
{   
    int no=6;
    // printf("enter the number: ");
    // scanf("%d",&no);
    printf("%d",fect(no));
    return 0;
}

int fect(int no)
{
    for (int i = no-1; i >= 1; i--)
    {
        no *= i;
    }
    return no;
}