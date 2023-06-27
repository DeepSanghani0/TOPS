#include<stdio.h>
int main(){
int a=0,b=1,c=0,d,n;
printf("enter number: ");
scanf("%d",&n);
    do
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    } while (c<=n);
    return 0;
}