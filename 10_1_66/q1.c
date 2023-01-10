#include <stdio.h>


int average(int[]);

int main(){
    int temp[5] , total = 0 , count ; 
    float avg;
    for (count = 0 ; count <= 4 ; ++count){
        printf("Enter element %d : ",count+1);
        scanf("%d",&temp[count]);
    }
    avg = average(temp);
    for (count = 0 ; count <= 4 ; ++count){
        printf("\n Element #%d = %d",count , temp [count]);
    }
    printf("\nThe average is %f\n",avg);
    return 0;
}

int average(int num[]){
    int count = 0 ; 
    int sum = 0; 
    float avg;
    for (count = 0 ; count <= 4 ; ++ count){
        // printf("%d ",num[count]);
        sum += num[count];
    }
    avg = sum / 5.0 ; 
    return avg ;
}


