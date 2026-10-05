#include<stdio.h>
struct p{
int x;
int y;
};
int main(){
struct p z = {23, 45};
printf("%d %d ", z.x,z.y);
return 0;
}