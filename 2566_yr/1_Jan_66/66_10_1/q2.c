#include <stdio.h>

float maxPrice(float[2][5][3]);
float minPage(float[2][5][3]);
float avgWeight(float[2][5][3],int);
float maxPageBook(float[2][5][3]);
void heavyBook(float[2][5][3]);

int main(){
    float books[2][5][3] = {
        {{280.50,350,152.5},{410.00,280,202.5},{1590.75,406,858.7},{296.50,310,102.5},{1210.50,450,952.0}}
        ,{{80.50,75,45},{2015,500,575},{120,25,30.75},{456.50,150,200},{110.50,50,130}}
        };
    float maxP , minP , avgW ;
    maxP = maxPrice(books);
    minP = minPage(books);
    avgW = avgWeight(books,1);
    printf("--- Maxprice Book in shelf---\n");
    printf("Max price is %f\n\n",maxP);
    printf("--- MinPage Book in shelf---\n");
    printf("Min page is %f\n\n",minP);
    printf("--- Average in Level 1 from shelf ---\n");
    printf("Average of Weight %f\n\n",avgW);
    printf("--- Position of The most Book Page in shelf  ---\n");
    maxPageBook(books);
    printf("--- Position of Book Page in shelf that hevier than 500 gram ---\n");
    heavyBook(books);
    
}

float maxPrice(float books[2][5][3]){
    float max = 0 ;
    int i , j , k ; 
    
        for (i = 0 ; i <= 1 ; i ++){
            for (k = 0 ; k <= 4 ; k ++){
                if (books[i][k][0] >= max) {
                    max = books[i][k][0];
                }
            }
        }
    return max;
}

float minPage(float books[2][5][3]){
    float minP = 99999 ;
    int i , j , k ; 
    
        for (i = 0 ; i <= 1 ; i ++){
            for (k = 0 ; k <= 4 ; k ++){
                if (books[i][k][1] <= minP) {
                    minP = books[i][k][1];
                }
            }
        }
    return minP;
}

float avgWeight(float books[2][5][3],int level){
        float avg , sum; 
        int i,j,k ; 
    
        for (k = 0 ; k <= 4 ; k ++){
                sum += books[level][k][2];
            } 
    avg = sum / 5 ;
    return avg;
}

float maxPageBook(float books[2][5][3]){
    float max = 0 ;
    int i , j , k ; 
        for (i = 0 ; i <= 1 ; i ++){
            for (k = 0 ; k <= 4 ; k ++){
                if (books[i][k][1] >= max) {
                    max = books[i][k][1];
                }
            }
        }
        for (i = 0 ; i <= 1 ; i ++){
            for (k = 0 ; k <= 4 ; k ++){
                if (books[i][k][1] == max) {
                    printf("books level[%d] at the position[%d] from index[%d] has %f page\n\n",i,k,1,max);
                }
            }
        }
}

void heavyBook(float books[2][5][3]){
    int i , j , k ;
        for (i = 0 ; i <= 1 ; i ++){
            for (k = 0 ; k <= 4 ; k ++){
                if (books[i][k][2] > 500) {
                    printf("books level[%d] at the position[%d] from index[%d] has %f gram\n",i,k,2,books[i][k][2]);
                }
            }
        }
}