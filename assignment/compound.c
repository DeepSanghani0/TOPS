#include<stdio.h>
#include<math.h>
// A = amount
// P = principal
// r = rate of interest
// n = number of times interest is compounded per year
int main(){
    float A;
    float P;
    float r;
    float n;
    printf("enter value of principal: ");
    scanf("%f",&P);
    printf("enter rate of interest: ");
    scanf("%f",&r);
    printf("enter time period (in year): ");
    scanf("%f",&n);
    A=(P * pow(1 + (r/100),n));
    printf("total amount to be paid %f",A);
    return 0;
}