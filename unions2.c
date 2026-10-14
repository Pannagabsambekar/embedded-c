#include<stdio.h>
union A{
int a;
char b;
}var;
int main(){
var.a =45;
printf("%d \n", var.a);
printf("%c", var.b);
return 0;}
// random character generates for b