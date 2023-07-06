//Write a Program of find the element of given position from the array
#include<stdio.h>
int i;
int main(){
    int array[5]={2,3,4,5,6};
    printf("enter position of array : ");
    scanf("%d",&i);
    printf("array[%d]=%d",i,array[i]);
}