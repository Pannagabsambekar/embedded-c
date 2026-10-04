#include<stdio.h>
int main(){
int a[]={1,2,3,4,5};
int sum =0;
for(int *p= a;p <= &a[4]; p++ ){
  sum +=*p;}
  printf("sum is %d", sum);
  return 0;
  }
  