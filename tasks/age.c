#include<stdio.h>
int main(){
    int currentage = 23;
    printf("age in  2023 is %d year\n",currentage);
    printf("age in  2022 is %d year\n",--currentage);
    printf("age in  2024 is %d year\n",++currentage);
    printf("age in  2026 is %d year\n",currentage+3);
    return 0;
}