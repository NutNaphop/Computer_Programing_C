#include <stdio.h>
int main(){
    // 1 st 
    for(int i = 1 ; i <= 5 ; i ++ ){
        for (int j = 1 ; j <= i ; j ++){
            putchar('*');
        }
        puts("");
    }
    // 2 nd
    for (int i = 1 ; i <= 5 ; i ++){
        for(int j = 5 ; j > i ; j --){
            printf(" ");
        }
        for(int k = 1 ; k <= i ; k ++){
            putchar('*');        }
            puts("");
    }
    // 3 nd 
    for (int i = 1 ; i <= 5 ; i ++){
        for (int j = 5 ; j >= i ; j --){
            putchar('*');
        }
        puts("");
    }
    // 4 nd 
    for (int i = 1 ; i <= 5 ; i ++){
        for (int j = 1 ; j <= i ; j ++){
            printf(" ");
        }
        for (int k = 5 ; k >= i ; k --){
            putchar('*');
        }
        printf("\n");
    }
}