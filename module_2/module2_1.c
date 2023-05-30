// Write a program to make a square and cube of number
// take number from user

#include<stdio.h>
int main (){
    
    int number;
    printf("enter any number: ");
    scanf("%d",&number);
    
    printf("square of given number is %d \n",number * number);
    printf("cube of given number is %d \n",number * number * number);
    
                             //OR
    
    // int squre=number*number;
    // printf("squre of given number is %d. \n",squre);
    // int cube=squre * number;
    // printf("cube of given number is %d.",cube);
    
    return 0;
}