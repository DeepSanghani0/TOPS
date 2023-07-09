// Write a program to print the Fibonacci series using function
#include<stdio.h>
int a=0,b=1,c=0,d,n;
int fibonaci(){
    do
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    } while (c<=n);
}
int main(){
    printf("enter number: ");
    scanf("%d",&n);
    fibonaci();
    return 0;
}