//take age from user and tell that he or she is adult or not
#include<stdio.h>
int main()
{
 
 int age;
 printf("enter your age: ");
 scanf("%d",&age);

    age>=18 ? printf("adult") : printf("not addult");
    return 0;
    
}