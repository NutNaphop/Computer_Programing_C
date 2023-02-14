#include <stdio.h>
#include <string.h>

int main(){
    char string1[25] ; 
    char string2[25] ; 
    char string3[25] ;

    printf("Enter a String1 : ") ; 
    gets(string1) ;
    printf("Enter a String2 : ");
    gets(string2);
    printf("\nNew String = %s\n",strcat(string1,string2));
    printf("New String = %s%s\n",string2,string1);
    printf("New String = %s\n",string1);
    strcpy(string3,string1);
    strcat(string3,string1);
    printf("New String = %s\n",string3);
    printf("Lenght of String3: %d\n",strlen(string3));
    
}