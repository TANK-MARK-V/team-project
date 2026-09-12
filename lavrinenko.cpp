#include "lavrinenko.h"
#include <cmath>

//Объём пирамиды с квадратным основанием
double pyramidVolume(double a, double h){
    return a*a*h/3;
}
//fdfsfdgdfgfd
//fdgdfgdfgdfgff
//dfgfdgdfgfd
//dfgdfgfd
//Высота боковой грани
double pyramidApothem(double a, double h){
    return sqrt(h*h+(a/2)*(a/2));
}