#include<stdio.h>
struct{
char *engine;}
car1, car2;
int main(){
car1.engine = "Its V8 ";
car2.engine = "Its V4";
printf("%s , %s", car1.engine, car2.engine);
return 0;
}