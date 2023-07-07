#include<stdio.h>
int i,j,a[3][3],c=-1;
int getdata(){
    printf("enter value of matrix: ");
    for (int i = 0; i <=2 ; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
}

int display(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int max(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        if (c<a[i][j])
        {
            c==a[i][j];
        }   
        }
        printf("\n");
    }
    printf("max is %d",c);
}

int main(){
    getdata();
    display();
    max();
    return 0;
}

