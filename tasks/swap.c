//write a program to swap value of two variable 
#include <stdio.h>
int main(){
    int a,b;
    printf("enter the value of a , b: ");
    scanf("%d%d",&a,&b);
    printf("before swaping value of a = %d & b = %d \n",a,b);
    a=b-a;
    b=b-a;
    a=b+a;
    printf("after swaping value of a = %d & b = %d",a,b);
    return 0;
}