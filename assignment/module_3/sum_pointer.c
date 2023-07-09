//Write program to make an addition of two number using pointer.
#include<stdio.h>
int main(){
    int a,b,*pointer1,*pointer2,sum;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);

    pointer1=&a;
    pointer2=&b;
    sum = *pointer1 + *pointer2;
    printf("sum of given number is %d",sum);

return 0;
}