#include <stdio.h>
int main(){
    char first_name[15];
    printf("Enter your first name: ");
    scanf("%s", first_name);
     printf("Your full name is %s \n", first_name);

    int maths, science, sst, english, gujarati,sanskrit;
        printf("enter your marks (out of 100) for given subject \n");
        printf("maths: ");
        scanf("%d",&maths);
        printf("science: ");
        scanf("%d",&science);
        printf("sst: ");
        scanf("%d",&sst);
        printf("english: ");
        scanf("%d",&english);
        printf("gujarati: ");
        scanf("%d",&gujarati);
        printf("sanskrit: ");
        scanf("%d",&sanskrit);
            float sum=maths+ science+ sst+ english+ gujarati+sanskrit;
            printf("sum of marks of ALL Subject is %f (out of 600)\n",sum);
    float percentage= sum/6;
    printf("you got %f percentage\n",percentage);
                if (percentage>75)
                {
                    printf("congratulation you got Distinction");
                }
                else if (percentage> 60 && percentage<= 75)
                {
                    printf("First Class");
                }
                else if (percentage > 50 && percentage <= 60)
                {
                    printf("Second Class");
                }
                else if (percentage > 35 && percentage <= 50)
                {
                    printf("Pass Class");
                }
                else
                {
                    printf("FAIL");
                }
                
  return 0;
}