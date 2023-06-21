#include<stdio.h>
int main(){
    int i,j,k,rows;
    printf("enter the number of rows: ");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; i++)
    {
    
        for (int k = 1; k < ((rows+1)-i); k++)
        {
            printf("*");
        }
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
       for (int m = 1; m <= i; m++)
        {
            printf(" ");
        }
        for (int l = rows; l > i ; l--)
        {
            printf("*");
        }
        printf("\n");   
    }
    return 0;
}