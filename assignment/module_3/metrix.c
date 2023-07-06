#include<stdio.h>
int a[2][3];
int i, j;
int getdata()
{
    printf("Enter the value: \n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
}
void display()
{
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }   
}
int main()
{
    //Call the UDF function
    getdata();
    display();
    return 0;
}