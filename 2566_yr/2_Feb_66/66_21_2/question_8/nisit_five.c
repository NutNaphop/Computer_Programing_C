#include <stdio.h>
int main(){
    FILE *fp ; 
    char code[20];
    char name[50];
    char surname[50];
    float gpa ; 
    char str[100] ; 
    for (int i = 1 ; i <= 5 ; i ++){
        scanf("%s %s %s %f",&code,&name,&surname,&gpa);
        sprintf(str,"Code :%s \tName :%s \tSurname :%s \tGPA :%.2f\n",code,name,surname,gpa);
        fp = fopen("nisit_data.txt","a");
        if (fp == NULL){
            printf("Error to open this file");
            exit(1);
            break;
        }
        fputs(str,fp);
        fclose(fp);
        }
}