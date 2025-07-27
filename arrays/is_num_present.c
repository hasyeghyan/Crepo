#include <stdio.h>

int main(){

    const int size = 5;
    int arr[size] = {};

    printf("Input array elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr[i]);
  
    int number = 0;
    printf("Input your number: ");
    scanf("%d", &number);
    int flag = 0;
  
    for(int i = 0; i < size; ++i){
       if (arr[i] == number){
	   flag = 1;
           break;
       }
    }

    if(flag)
       printf("%d is present\n", number);
    else 
       printf("%d is not present\n", number);

   




   return  0;
}


