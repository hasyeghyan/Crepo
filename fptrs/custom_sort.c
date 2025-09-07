#include <stdio.h>

int ascending(int a, int b){
    return a > b;
}

int descending(int a, int b){
    return a < b;
}


void my_sort(int *arr, int size, int (*func)(int, int)){
     for(int i = 0; i < size; ++i){
        for(int j = i + 1; j < size; ++j){
           if(func(arr[i], arr[j])){
             int temp = arr[i];
             arr[i] = arr[j];
             arr[j] = temp;
           }
        } 
     }
}

int main(){
    const int size = 3;
    int arr[size] = {};
    printf("Please input your array: ");
    for(int i = 0; i < size; ++i){
       scanf("%d", &arr[i]);
    }
    int choice = 0;
    printf("Input 1 if you want to sort in ascending order, 2 in other case: ");
    scanf("%d", &choice);
    if(choice == 1){
      my_sort(arr, size, ascending);
    }
    else if (choice == 2){
      my_sort(arr, size, descending);
    }
    else {
     printf("Invalid choice: "); 
     return 0;
   }
   printf("Sorted array is :");
   for(int i = 0; i < size; ++i){
      printf("%d ", arr[i]);
   }
   return 0;
}
