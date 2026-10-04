#include<stdio.h>
int add(int a[], int len){
int sum =0;
for(int i=0; i<len; i++){
sum+=a[i];
}
return sum;}
int main(){
int b[]={1,2,3,4,5};
int len =sizeof(b)/sizeof(b[0]);
printf("%d",add(b , len)) ;
return 0;}


