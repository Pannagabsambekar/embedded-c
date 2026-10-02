#include<stdio.h>
int main(){
  int a[]={34,35,36,37,38,39,40};
  int *p=&a[3];
  
  printf("%d ",*(++p));
  
  return 0;
  }
  // this is pre increment