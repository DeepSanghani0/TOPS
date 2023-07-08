#include<stdio.h>
int no,a,b,c,d;
int main(){
    printf("enter number (4 digit): ");
    scanf("%d",&no);
    
    a=no/1000;
    b=(no/100)-(a*10);
    c=((no/10)-(a*100)-(b*10));
    d=(no-(a*1000)-(b*100)-(c*10)); 

    // printf("%d %d %d  %d",a,b,c,d);

    if (a==d && b==c)
    {
        printf("given number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
    return 0;
}