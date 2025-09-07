#include <stdio.h>

char my_to_lower(char c){
     c |= 1 << 5;
     return c;
} 

char my_to_upper(char c){
     c &= ~(1 << 5);
     return c;
}

void transform(char *str, char (*func)(char)){
     while(*str){
          *str = func(*str);
          ++str;
     }
}

int main(){
    const int size = 4;
    char arr[size] = {};
    printf("PLease input your string: ");
    for(int i = 0; i < size; ++i){
       scanf(" %c", &arr[i]);
    }
    printf("Input 1 for converting to uppercase, input 2 for converting to lowercase: ");
    int choice = 0;
    scanf("%d", &choice);
    if(choice == 1){
      transform(arr, my_to_upper);
    }
    else if(choice == 2){
      transform(arr, my_to_lower);
    }
    else{
      printf("Invalid choice");
      return 0;
    }
    printf("Trasnformed array is: ");
    for(int i = 0; i < size; ++i){
        printf("%c ", arr[i]);
    }
    return 0;
}
