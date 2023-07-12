#include<stdio.h>
#include<string.h>
struct studentdata
{
    int stdid,maths,science,sst,english,total,sum;
    float percentage;
    char stnm[20],result[20],result1[20],result2[20];
};
int main(){
struct studentdata stde[60];
    int i;
        
    for (int i = 0; i < 2; i++)
    {
        printf("enter your id: ");
        scanf("%d",&stde[i].stdid);
        printf("enter your name:");
        scanf("%s",&stde[i].stnm);
        printf("enter your marks(out of 100): \n");
        printf("maths: ");
        scanf("%d",&stde[i].maths);
        printf("science: ");
        scanf("%d",&stde[i].science);
        printf("sst: ");
        scanf("%d",&stde[i].sst);
        printf("english: ");
        scanf("%d",&stde[i].english);
        printf("enter 'pass':");
        scanf("%s",&stde[i].result1);
        printf("enter'fail':");
        scanf("%s",&stde[i].result2);   
    }
    printf("------------------------------------------------------------------------------\n");-
    printf("|ID\t| Name\t| Maths\t|Science| Sst\t|English| Total | Percentage| Result|\n");
    for (int i = 0; i < 2; i++)
    {
        stde[i].sum=stde[i].maths + stde[i].science + stde[i].sst + stde[i].english;
        stde[i].percentage=(stde[i].sum/4);
        if (stde[i].maths < 35 || stde[i].science < 35 || stde[i].sst < 35 || stde[i].english < 35 )
        {
            strcpy(stde[i].result,stde[i].result2);
        }
        else 
        {
            strcpy(stde[i].result,stde[i].result1);
        }
        
        printf("|%d\t| %s\t| %d\t| %d\t| %d\t| %d\t| %d\t| %f | %s  | \n", stde[i].stdid,stde[i].stnm,stde[i].maths,stde[i].science,stde[i].sst,stde[i].english,stde[i].sum,stde[i].percentage,stde[i].result);
    }
    printf("------------------------------------------------------------------------------");

    return 0;
}