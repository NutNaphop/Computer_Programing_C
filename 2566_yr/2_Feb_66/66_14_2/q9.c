#include <stdio.h>
int main(){
    
    struct dorminotory 
    {
        int elc ;
        int water ;
    }dorm[3];
    
    struct user_dorm
    {
        float elc_p ;
        float water_p;
        float cost ;
    }user[3];

    int max_water = 0 ; 
    int max_elc = 0 ;
    int i_water ;
    int i_elc ;
    
    for (int i = 0 ; i < 3 ; i ++){
        printf("Room number %d",(i+1));
        printf("\nEnter number of electric : ");
        scanf("%d",&dorm[i].elc);
        user[i].elc_p  = dorm[i].elc * 15 ;
        printf("Enter number of water : ");
        scanf("%d",&dorm[i].water);
        user[i].water_p  = dorm[i].water * 30;
        user[i].cost = user[i].water_p + user[i].elc_p + 250 ; 
        puts("Added !\n");
    }

    for (int i = 0 ; i < 3 ; i ++){
        printf("Room number %d\n",(i+1));
        printf("Number of Electric = %d Cost of Electric = %.2f\n",dorm[i].elc,user[i].elc_p);
        printf("Number of Water = %d Cost of Water = %.2f\n",dorm[i].water,user[i].water_p);
        puts("Cost of waste = 100.00");
        puts("Cost of service = 150.00");
        printf("Cost of room number %d = %.2f\n",i+1,user[i].cost);
        puts("**************************");
        if (dorm[i].water > max_water){
            max_water = dorm[i].water ; 
            i_water = i+1  ;
        };
        if (dorm[i].elc> max_elc){
            max_elc = dorm[i].elc ; 
            i_elc = i+1 ;
        };
    }

    printf("High Electric is Room number %d\n",i_elc);
    printf("High water is Room number %d",i_water);
} 