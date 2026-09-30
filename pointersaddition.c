#include<stdio.h>
int main(){
int a[]= {1,3 ,5 ,7 ,89,6};
int *p = &a[0];
printf("%d \n", *p);
 p = &a[0 +3];
 printf("%d", *p);
 return 0;
 }