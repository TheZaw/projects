//
//  SortingPractice.c
//  
//
//  Created by Christopher Lopez on 11/16/17.
//

#include "SortingPractice.h"
//---------------------------//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXNUM 10

//enum{
    
//}

typedef struct sort_struct{
    char type;
    double money;
}sort;



void sortstruct(sort array[MAXNUM]);
void printstruct(sort array[MAXNUM]);

int main(){
    srand(time(0));
    sort array[MAXNUM];
    int i;
    for(i=0;i<MAXNUM; i++){
        if((rand()%2)==0){
            array[i].type = 'A';
        }else{
            array[i].type = 'B';
        }
    }//randomizes type
    
    for(i=0;i<MAXNUM;i++){
        array[i].money = rand()%10;
    }//randomize money
    
    
    
    printstruct(array);
    printf("\n\n");
    
    sortstruct(array);
    printstruct(array);
    
}


void sortstruct(sort array[MAXNUM]){
    int i, j, k, place;
    sort temp;
    
    for(i=0;i<MAXNUM;i++){
        place = i;
        if(array[i].type == 'A'){
            while((array[place-1].type != array[i].type)&&(place>0)){
                place--;
            }
        }
        
        while((array[i].money > array[place-1].money)&&(array[i].type == array[place-1].type)){
            place--;
        }
        temp = array[i];
        for(k=i;k>=place;k--){
            array[k] = array[k-1];
        }
        array[place]= temp;
        
    }
    
}

void printstruct(sort array[MAXNUM]){
    int i;
    for(i=0;i<MAXNUM;i++){
        printf("%c %lf\n", array[i].type, array[i].money);
    }
    
    
}

/*
while()

for(i=j;j>=0;j--){
    if(){
        
    }
    
    
}
*/


