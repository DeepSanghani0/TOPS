//Write a program to print the number in reverse order. 
#include<stdio.h>
int main(){
    int i,n;
    printf("from which number do you want to start reverse order: ");
    scanf("%d",&n);
    for (int i = n; i >=1; i--)
    {
        printf("%d \n",i);
    }
    return 0;
}