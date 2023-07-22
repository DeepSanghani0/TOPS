#include<stdio.h>
 int no,i,multiply;
 char ch;
int main(){
    FILE *table;
   
    printf("enter no.: \n");
    scanf("%d",&no);
    for (int i = 1; i <= 10; i++)
    {
        multiply=no*i;
    {
    table = fopen("table.txt","a");
    fscanf(table,"%d %d %d",&no,&i,&multiply);
    fprintf(table,"\n %d %d %d",no,i,multiply);
    fclose(table);
    }
    
    
    }
    //read data from file
    table = fopen("table.txt","r");
    // ch = fgetc(table);

    while (ch != EOF)
    {
        ch = fgetc(table);
        printf("%c",ch);
    } 
    fclose(table);
    return 0;
}