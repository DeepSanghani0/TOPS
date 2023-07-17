/*
    ****
     ***
      **
       *
*/
#include<stdio.h>
int main(){
    int i,j,k,l;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 4; k >= i; k--)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}