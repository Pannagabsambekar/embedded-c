#include<stdio.h>
int main(){
   int a[]={1,3,4,6,776,784,464};
   int *s = &a[6];
   s = &a[6-1];
   printf("%d", *s);
   return 0;
   }