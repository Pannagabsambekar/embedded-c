#include<stdio.h>
int *func(int a[], int n){
    return &a[n/2];
     }

int main(){
   int a[]={1,4,5,2,5, 7};
   int n = sizeof(a)/sizeof(a[0]);
   int *mid = func(a , n);
   printf("The mid term is : %d", *mid);
   return 0;
   }