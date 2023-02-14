#include <stdio.h>
int main(){
    FILE *fp ; 
    char code[20];
    char name[50];
    char surname[50];
    float gpa ; 
    char str[100] ; 

    scanf("%s %s %s %f",&code,&name,&surname,&gpa);
    fp = fopen("my_nisit_data.txt","w");

    if (fp == NULL){
        printf("Error to open this file");
        exit(0);
    }
    // printf("%s",str);
    // fputs(str,fp);
    fprintf(fp,"Code :%s \tName :%s \tSurname :%s \tGPA :%.2f",code,name,surname,gpa);
    fclose(fp);
}