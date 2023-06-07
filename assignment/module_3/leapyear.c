//write a program to check given year is leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("enter year: ");
    scanf("%d",&year);
    if (year % 4== 0)
    {
        printf("given year is leap year");
    }
    else{
        printf("given year is not leap year");
    }
    return 0;
}