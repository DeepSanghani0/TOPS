#include<stdio.h>
int main(){
    int l,m,n,o,rows=10;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 10; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <=1; k++)
        {
            printf("*");
        }
        if (i==5)
        {
            printf(" * * * * * ");
        }
        
        for (int l = 0; l < i; l++)
        {
            printf("  ");
        }
        
        for (int i = 0; i < 1; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}