#include<stdio.h>
int main(){
int a[]={34,35,36,37,38,39,40};
 int *x =&a[5];

 /*printf("%d \n", *(x--));
 printf("Post decrement is : %d", *x);
 */
 
  printf("Pre decrement is : %d", *(--x));
 return 0;}
