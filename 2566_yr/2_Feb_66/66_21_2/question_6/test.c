#include <stdio.h>
int main(){
    FILE *fp ;
    char name[20] ; 
    char price_new[20];
    int num ; 
    float price ; 
    float total ; 
    fp = fopen("data.txt","r");

    if (fp == NULL){
        printf("Error Cannot open the file");
        exit(1);
    }else{
        puts("PASS");
    }
    while (feof(fp) == 0){
        fscanf(fp,"%d %f %s",&num,&price,&name);
        price = price*(-1);
        name[0] = ' ';
        total = num * price ; 
        printf("Name : %s\tNumber : %d\tPrice : %.2f\tTotal : %.2f\n",name,num,price,total);
    }

    fclose(fp);
}