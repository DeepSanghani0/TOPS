//Write a program to find out the Max number from given Matrix
#include<stdio.h>
int i,j,mat[3][3];
int getdata(){
    printf("enter value of matrix: ");
    for (int i = 0; i <=2 ; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }
}

int display(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int max = -1;
int maximum(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j]> max)
            {
                max = mat[i][j];
            }   
        }   
    } 
    printf("maximum is %d",max);  
}
int main(){
    getdata();
    display();
    maximum();
    return 0;
}