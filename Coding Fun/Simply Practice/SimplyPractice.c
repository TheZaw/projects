//
//  SimplyPractice.c
//  
//
//  Created by Christopher Lopez on 11/15/17.
//

#include "SimplyPractice.h"
#include <stdio.h>
#include <stdbool.h>

enum type {
    bid, //0
    ask  //1
};

typedef struct trade_struct{
    enum type type;
    double money;
}trade;

void printarray(int ar[][2], int x, int y);


int main(){
    int hold[10][2];//[object][categery/number]
    int i=0, j, lastval, sort[10];
    bool check = false;
    hold[i][0] = 1; hold[i][1] = 2; i++;
    hold[i][0] = 2; hold[i][1] = 8; i++;
    hold[i][0] = 1; hold[i][1] = 4; i++;
    hold[i][0] = 2; hold[i][1] = 5; i++;
    hold[i][0] = 1; hold[i][1] = 9; i++;
    hold[i][0] = 2; hold[i][1] = 3; i++;
    hold[i][0] = 2; hold[i][1] = 8; i++;
    hold[i][0] = 1; hold[i][1] = 7; i++;
    hold[i][0] = 1; hold[i][1] = 2; i++;
    hold[i][0] = 2; hold[i][1] = 5; i++;
    
    /*
    printarray(hold, 10, 2);
    printf("\n");
   
    
    int max = hold[0][0], maxplace = 0;
    for(i=0;i < 10; i++){
        max = hold[i][0];
        maxplace = i;
        for(j=10;j>i-1;j--){
            if(hold[j][0] < max){
                max = hold[j][0];
                maxplace = j;
            }
        }
        hold[maxplace][0] = hold[i][0];
        hold[i][0] = max;
        
    }
    lastval=0;
    while(hold[lastval][0]==1){
        lastval++;
    }
    
    printarray(hold, 10, 2);
    
    max = hold[0][1], maxplace = 0;
    for(i=0;i < lastval; i++){
        max = hold[i][1];
        maxplace = i;
        for(j=lastval-1;j>i-1;j--){
            
            if(hold[j][1] > max){
                max = hold[j][1];
                maxplace = j;
            }
        }
        hold[maxplace][1] = hold[i][1];
        hold[i][1] = max;
    }
    printf("\n");
    printarray(hold, 10, 2);
    
*/
    
    
    
   
    for(i=0;i < 10; i++){
        sort[i] = i;
        //printf("%d", sort[i]);
    }
    //printf("\n");
    j=0;
    for(i=0;i< 10; i++){
        if(hold[i][0] == 1){
            sort[j] = i;
            j++;
        }
    }//nothing inbetween
    lastval = j;
    for(i=0;i< 10; i++){
        if(hold[i][0] == 2){
            sort[j] = i;
            j++;
        }
    }
    
    
    //working bubble code
    int temp;
    for(j=0;j<=lastval;j++){
        for(i = 0; i < lastval-1; i++){
            if(hold[sort[i]][1] > hold[sort[i +1]][1]){
                temp = sort[i];
                sort[i]= sort[i+1];
                sort[i+1]= temp;
            }
        }
    }
    for(j=9;j>lastval;j--){
        for(i = 0; i > lastval-1; i++){
            if(hold[sort[i]][1] > hold[sort[i +1]][1]){
                temp = sort[i];
                sort[i]= sort[i+1];
                sort[i+1]= temp;
            }
        }
    }
    
    
    for(i=0;i<10;i++){
        printf("%d, %d\n", hold[sort[i]][0],hold[sort[i]][1]);
        
    }
    
    
    
    
    /*
    for(i=0;i < 10; i++){
        //sort[i] = i;
        printf("%d", sort[i]);
        if(i == 9){
            printf("\n");
        }
    }
    */
    
    return 0;
}



void printarray(int ar[][2], int x, int y){
    int i,j;
    for(i = 0; i<x; i++){
        for(j = 0; j<y; j++){
            printf("%d", ar[i][j]);
            if(j != (y-1)){
                printf(",");
            }
        }
        printf("\n");
    }
    
    
}













