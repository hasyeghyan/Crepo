#include <stdio.h>

int main(){

    const int size = 5;
    int arr[size]={};

    printf("Input your array elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr[i]);

    int n = 0;
    printf("Input n: ");
    scanf("%d", &n);
    int flag = 1;

    for (int i = 0; i <= n; i++){
         for(int j = 0; j < size; j++ ){
             if (arr[j] == i){
                 flag = 0;
             }	     
         }
	  if(flag)
		  printf("%d ", i);
	  flag = 1;
    }
    printf("\n");





   return  0;
}
   
