#include <stdio.h>

int main(){
    int data[5] = {}; 
    int num;
    int *pt_data ; 
    for (int i = 1 ; i <= 5 ; i ++){
        printf("Enter Your Number : ");
            scanf("%d",&num);
            data[i-1] = num ; 
    }
    pt_data = &data[4];
    puts("---Result---");
    for(int i = 5 ; i >= 1 ; i --){
        printf("position %d => address %p and value is : %d\n",i,pt_data,*pt_data);
        pt_data -- ; 
    }

}

