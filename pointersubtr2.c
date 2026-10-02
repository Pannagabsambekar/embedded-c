    #include<stdio.h>
    int main(){
    int p[]={69,68,67,66,65,64,63};
    int *s=&p[3];
    int *r=&p[2];
    printf("%d", (s-r));
    return 0;
    }