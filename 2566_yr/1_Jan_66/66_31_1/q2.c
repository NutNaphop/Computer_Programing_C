#include <stdio.h>
#include <string.h>

int main(){
    char str1[25];
    char str2[25];
    char find_char ; 
    char *ptr ; 
    int count = 0 ; 
    printf("Enter a String1 : ");
    gets(str1);
    printf("Enter a String2 : ");
    gets(str2);
    printf("All String = %s",strcat(str1,str2));
    puts("\n\n*****************");
    printf("Find a Character : ");
    find_char = getchar() ; 

    for(int i = 0 ; i < strlen(str1) ; i ++){
        ptr = &str1[i] ; 
        if (*ptr == find_char){
            count += 1 ;
        } 
}
printf("Number of %c = %d",find_char,count);
}
