#include <stdio.h>

int main(){
    int data[10]; 
    int num;
    int *pt_data[10]; 
    for (int i = 1 ; i <= 10 ; i ++){
        printf("Enter Your Number : ");
            scanf("%d",&data[i-1]);
    }
    pt_data[10] = &data[9];

    puts("---Result---");
    for(int i = 10 ; i >=2 ; i -= 2 ){
        printf("position %d => address %p and value is : %d\n",i,pt_data[10],*pt_data[10]);
        pt_data[10] -= 2 ;
    }
}

