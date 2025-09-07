#include <stdio.h>

void print_square(int x){
     printf("The square is %d", x * x);
}

void print_double(int x){
     printf("Double times is %d %d", x, x);
}

void for_each(int *arr, int size, void (*func)(int)){
     for(int i = 0; i < size; ++i){
        func(arr[i]);
        printf("%c", ' '); 
     }
}

int main(){
    const int size = 3;
    int arr[size] = {};
    printf("Please input your array: ");
    for(int i = 0; i < size; ++i){
       scanf("%d", &arr[i]);
    }
    for_each(arr, size, print_square);
    printf("%c", '\n');
    for_each(arr, size, print_double);
    printf("%c", '\n');
    return 0;
}
