#include<stdio.h>
struct cricket{
char Captain[25];
int squad;}
;
int main(){
struct cricket C[2];
int i;
for(i=0; i<=1; i++){
printf("Enter the Captain's name : ");
scanf("%s", C[i].Captain);
printf("Enter the number of members in team : ");
scanf("%d", &C[i].squad);
}
for(i =0; i<=1 ; i++){
printf("Team Captain's name is : %s \n", C[i].Captain);
printf("The number of members in the squad is : %d \n", C[i].squad);

}
return 0;}