#include <stdio.h>
int main(){
    FILE *fp ; 
    char product[100] ; 
    float price ; 

    for (int i = 1 ; i <= 3 ; i ++){
        printf("Please Input Product name : \n");
        scanf("%s",&product);
        printf("Please Input Product Price : \n");
        scanf("%f",&price);
        puts("\n*******");
        // write file (append)
        fp = fopen("product.txt","a");
        fputs(product,fp);
        fputs("\n",fp);
        fclose(fp);
        fp = fopen("price.txt","a");
        fprintf(fp,"%.2f",price);
        fputs("\n",fp);
        fclose(fp);
    }
}