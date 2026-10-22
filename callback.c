// when one thing happens this should happen this is the logic of call back
#include<stdio.h>
void slow(){
printf("Drive slow");
}
void driver(void (*click)()){
printf("Drive fast \n ");
click();}

int main(){
driver(slow);
// here driver function calls click and also slow
return 0;
}