//WAP to find largest of given 3 number
//ternary operator
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a : ");
   scanf("\n%d",&a);
   printf("enter the value of b : ");
   scanf("\n%d",&b);
   printf("enter the value of c : ");
   scanf("\n%d",&c);
   
 (a>b && a>c) ? (printf("a is largest number")) : ((b>a && b>c) ? (printf("b is largest")) : (c>a && c>b) ? (printf("c is largest number")) : printf("all the number are s"));
   
   return 0;
}