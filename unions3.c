#include<stdio.h>
struct C{
int jp;
union X{
int k;}
l1;};
int main(){
  struct C l;
  l.l1.k = 25;
  printf("%d", l.l1.k);
  return 0;
  }