#include<stdio.h>
union A{
int a;
char b;
};
int main(){
union A s;
printf("%ld ", sizeof(s));
return 0;
}