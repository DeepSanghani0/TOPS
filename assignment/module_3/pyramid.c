#include<stdio.h>
int main(){
    int i,j,rows,m;
    printf("enter the nuber of raws: ");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++)
    {   
        // m=i-1;
        for (int k = 1; k < (9-i); k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        
        for (int l = 1; l <= i-1; l++)
        {
            // printf("%d",m);
            // m--;
            printf("*");
        }
        printf("\n");
    }
    return 0;
}