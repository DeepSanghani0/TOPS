//Write a program to find out the max number from given 10 elements of array
#include<stdio.h>
int main(){
    int i;
    int array[5];
    int max=-1;
    for (int i = 0; i <= 5; i++)
    {
        printf("enter array value array[%d]",i);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i <= 5; i++)
    {
    if (max<array[i])
    {
        max=array[i];
    }
    }
    printf("maximum number is %d",max);
    return 0;
}