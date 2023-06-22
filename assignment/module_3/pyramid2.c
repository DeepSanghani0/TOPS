#include<stdio.h>
int main(){
    int i,j,k,rows,l,m,n;
    printf("enter the value of rows: ");
    scanf("%D",&rows);

    for (int i = 0; i < rows; i++)
    {
        int r=1;
        for (int j = 10; j >i ; j--)
        {
            printf(" ");
        }
        
        for (int k = rows; k<=rows ; k++)
        {
            printf("*");
        }
        if (i==5)
        {
            printf(" * * * * * ");
        }
        else{
        for (int m = 0; m <i; m++)
        {
            printf(" ");
        }  
        } 

        if (i==5)
        {
            continue;
        }
        else{
        for (int n = 0; n < i; n++)
        {
            printf(" ");
        }
        }

        if (i==5)
        {
            continue;
        }
        else{
        for (int p = 0; p  <= r; p++)
        {
            printf("*");
            r--;
        }
        }

        printf("\n");
    }
    return 0;
}