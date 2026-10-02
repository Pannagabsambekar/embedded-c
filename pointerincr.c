#include<stdio.h>
int main(){
  int a[]={34,35,36,37,38,39,40};
  int *p=&a[3];
  printf("%d \n",*(p++));
  printf("%d",*p);
  return 0;
  }
  // this is the post increment frist it assigns value and then increments it