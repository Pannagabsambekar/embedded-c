#include<stdio.h>
struct ppp{
int a;
int b;
};
int main(){
struct ppp s ={ 12, 13};
    struct ppp *ptr = &s;
    printf(" %d %d", ptr->a, ptr->b);
    return 0;}