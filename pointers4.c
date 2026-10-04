#include<stdio.h>
int main(){
int a[]={1,2,3,4};
int *p= a;
printf("%d", *(++p));
return 0;
}