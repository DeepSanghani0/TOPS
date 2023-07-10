//Write a program to sort the array of 5 elements. 
#include<stdio.h>
int main(){
    int i,max;
    int array[i];
//input
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value of arry[%d]: ",i);
        scanf("%d",&array[i]);
    }
    

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (array[i]<array[j])
            {
                max=array[i];
                array[i]=array[j];
                array[j]=max;
            }  
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}