//
//  Playground.c
//  
//
//  Created by Christopher Lopez on 10/27/17.
//

#define PI 3.14159
#include "Playground.h"
#include <stdio.h>


//function prototypes
double circleArea(double radius);

void main(){
    double area, radius;
    
    printf("enter raidus\n");
    scanf("%lf", &radius);//3.03898 343
    area = circleArea(radius);
    printf("circle with %lf radius has an area of %lf units squared\n", radius, area);
    
    
}

//functions
double circleArea(double radius){
    
    return PI * radius *radius;
}
