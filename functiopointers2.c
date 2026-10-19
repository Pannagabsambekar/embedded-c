#include<stdio.h>
# define ops 4
float add(float a , float b){
return a+b;
}

float sub(float a , float b){
return a-b;
}

float mult(float a , float b){
return a*b;
}

float divide(float a , float b){
return a/b;
}
int main(){
float (*ptr[ops])(float , float)= {add , sub , mult , divide};
int choice;
float a , b;
printf("Enter your choice : 1)for add , 2) for sub , 3) for mul , 4) divide \n");
scanf("%d", &choice);
printf("Enter two numbers : ");
scanf("%f %f", &a , &b);
printf("%f", ptr[choice-1](a, b));
return 0;
}
