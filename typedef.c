#include<stdio.h>
typedef struct car {
int car_cc;
char car_colour[30];
}car;
int main(){
 car c1= {1800 , "Blue"};
 printf("%d  %s", c1.car_cc, c1.car_colour);
 return 0;
}
// typedef helps to change data type name , i have changed to "car" than struct car