#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    char str2[20];
    char find;
    int sum = 0;
    char *ptr;
    int i  ;
    int j = 0 ;
    printf("Enter a string 1: ");
    scanf("%s",&str1);
    printf("Enter a string 2: ");
    scanf("%s",&str2);
    strcat(str1,str2);
    printf("All string = %s\n",str1);
    printf("********************\n");
    printf("Find a character : ");
    scanf("%s",&find);
   for(int i = 0 ; i < strlen(str1) ; i ++ ){
    //printf("%c",str1[j]);
    ptr = &str1[j];
    if (*ptr== find){
        sum ++ ;
    }
    j ++ ; 
   }
    printf("%c %d",find,sum);
}

