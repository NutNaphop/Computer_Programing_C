#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char a[100] ;
    char b[100]  ;
    char c ;
    printf("Input String : ");
    gets(a);
    printf("Lower String : ");
    for (int i = 0 ; i < strlen(a) ; i ++){
        c = a[i];
        printf("%c",tolower(c));
    }
    printf("\nInput String : ");
    gets(b);
    printf("Lower String : ");
    for (int i = 0 ; i < strlen(b) ; i ++){
        c = b[i];
        printf("%c",toupper(c));
    }


}