#include<stdio.h>
int main(){
    int i;
    int array[5];
    for (int i = 0; i < 5; i++)
    {
    printf("enter the value of array[%d]",i);
    scanf("%d",&array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("value of array[%d] is %d \n",i,array[i]);
    }
    return 0;
}