#include<stdio.h>
volatile int flag =0;
// flag is inside RAM and it takes the value 0

void ISR(){flag =1;};
// everytime when ISR clicked it makes flag =1
int main(){
while (flag ==0);
return 0;
}


