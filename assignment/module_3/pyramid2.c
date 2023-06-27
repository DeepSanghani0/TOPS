#include<stdio.h>
int main(){
    int m=1;
for (int i = 1; i < 5; i++)
{
    for (int j = 0; j < i; j++)
    {
        printf("%d ",m);
        m++;
    }
    printf("\n");
}
    return 0;
}