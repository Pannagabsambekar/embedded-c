#include<stdio.h>
int main(){
    int x =89;
    int *ptr;
    ptr = &x;
    *ptr = 69;
printf("%d", *ptr);
return 0;

}