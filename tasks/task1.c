#include<stdio.h>
int main(){
    int a=23,b=56;
    
    a=b; b=a;
    printf("value of a is %d, and valure of b is %d",a,b);
    return 0;
}