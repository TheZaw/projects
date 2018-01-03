//
//  cStructs.c
//  
//
//  Created by Christopher Lopez on 11/15/17.
//

#include "cStructs.h"
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


void specialfunction(trade* array, int size);

int main(){
    trade array[10];
    trade temp;
    specialfunction(array, 10);
    
    
    //selection sort and bubble sort(swap)
    
    array[0].type = bid;
    
    temp = array[1];
    array[1] = whatever;
    
    
    
    
}

void specialfunction(trade* array, int size){
    
}








