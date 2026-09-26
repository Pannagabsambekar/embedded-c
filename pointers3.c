#include<stdio.h>
void minmax(int arr[], int *max, int *min, int len){
int i;
 *min =arr[0];
*max = arr[0];
for (int i=1; i< len; i++){
     if(arr[i]>*max){
        *max = arr[i]; 
     }
     if(arr[i]<*min){
         *min = arr[i];
         }
         
         }
         }


int main(){
    int arr[]= {11, 35 , 46, 37, 28};
    int len= sizeof(arr)/ sizeof(arr[0]);
    int min , max;
    minmax(arr,  &max, &min, len );
    printf("The maximum value is : %d. The minimum value is : %d ", max , min);
    return 0;
}