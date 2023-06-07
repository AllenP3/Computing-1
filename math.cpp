
#include "math.h"


double area(double length, double width){ //rectangle
    return length * width;
}
double area(double length){ //square

    return length * length;
}
double area(Rectangle rectangle){
    return rectangle.length * rectangle.width;
}
double pow(double base, int power){   //default argument if no parameter is provided
    int total = 1;
    for(int i = 0; i < power; i++){
        total *= base;
    }
    return total;
}

