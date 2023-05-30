                //Write a program to find simple interest 
#include<stdio.h>
#include<math.h>
int main(){
    int P;
    float R;
    int N;
    float SI;

    printf("enter the value of principal: ");
    scanf("%d",&P);

    printf("enter the rate of interest: ");
    scanf("%f",&R);

    printf("enter the duration: ");
    scanf("%d",&N);

    SI=((P * R * N)/100);
    printf("\n simple interest of given number is %f \n",SI);

    printf("total payable amount is %f \n",SI + P);
    return 0;
}