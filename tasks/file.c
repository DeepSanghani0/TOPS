#include<stdio.h>
int main(){
    FILE *table;
    int no,i,multiply;
    printf("enter no.: ");
    scanf("%d",&no);
    for (int i = 1; i <= 10; i++)
    {
        multiply=no*i;
    
    table = fopen("table.txt","a");
    fscanf(table,"%d %d %d",&no,&i,&multiply);
    fprintf(table,"%d %d %d \n",no,i,multiply);
    fclose(table);
    
    
    printf("%d %d %d \n",no,i,multiply);

    }
    return 0;
}