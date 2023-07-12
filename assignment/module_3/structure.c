//Write a program of structure for five employee that provides the following information print and display empno, empname, address and age 
#include<stdio.h>
struct employ
{
    int emplno,age;
    char name[20],address[40];
};
int main(){
    struct employ emdt[20];

    for (int i = 0; i < 1; i++)
    {
        printf("enter employ id: ");
        scanf("%d",&emdt[i].emplno);
        printf("enter your name: ");
        scanf("%s",&emdt[i].name);
        printf("enter your age: ");
        scanf("%d",&emdt[i].age);
        printf("enter your address: ");
        scanf("%s",&emdt[i].address);
    }
    printf("-----------------------------------------\n");
    printf("|emp no.| name\t| age\t| address\t| \n");
    for (int i = 0; i < 1; i++)
    {
        printf("|%d\t| %s\t| %d\t| %s\t| \n",emdt[i].emplno,emdt[i].name,emdt[i].age,emdt[i].address);
    }
    printf("-----------------------------------------\n");
    
    
}
