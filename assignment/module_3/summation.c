// Write a program make a summation of given number(E.g. 1523 ans :-11) 

#include<stdio.h>
int main(){
    int n,a,b,c,d;
    printf("enter the value of n(4 digits): ");
    scanf("%d",&n);
    a=(n/1000);
    b=((n/100)-(a*10));
    c=((n/10)-((a*100)+(b*10)));
    d=(n-((a*1000)+(b*100)+(c*10)));
printf("sum of digits of %d is %d",n,a+b+c+d);
    return 0;
}