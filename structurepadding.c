#include<stdio.h>
struct C{
char a;
char b;
int c;
};
int main(){
struct C v;
printf("%d ", sizeof(v));
return 0;}