#include <stdio.h>

int main(){

    const int size = 3;
    int arr[size]= {};
    int arr1[size] = {};

    printf("Input your array elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr[i]);
 
    printf("Input your array1 elements: ");
    for(int i = 0; i < size; ++i)
       scanf("%d", &arr1[i]);


    int temp = 0;
    for (int i = 0; i < size; i++){
         for(int j = i + 1; j < size; j++ ){
             if (arr[i] > arr[j]){
                 temp = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;
             }
         }
    }

    printf("Sorted array is: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);

    }
    printf("\n");
   
    temp = 0;
    for (int i = 0; i < size; i++){
         for(int j = i + 1; j < size; j++ ){
             if (arr1[i] > arr1[j]){
                 temp = arr1[i];
                 arr1[i] = arr1[j];
                 arr1[j] = temp;
             }
         }
    }

    printf("Sorted array1 is: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr1[i]);

    }
    printf("\n");
    
   int arr2[2 * size] = {};
   int i = 0;
   int j = 0;
        while  ((i) != size){
		arr2[i] = arr[i];
	        i++;
	}
	while ((i) != (2 * size)){
		arr2[i] = arr1[i - size];
	       i++;
	}	       
    
	temp = 0;

        for (i = 0; i < 2 * size; i++){
         for(j = i + 1; j < 2 * size; j++ ){
             if (arr2[i] > arr2[j]){
                 temp = arr2[i];
                 arr2[i] = arr2[j];
                 arr2[j] = temp;
             }
         }
    }
   
    printf("Sorted  merged array is: ") ;
     for(i = 0; i < 2 * size; i++){
        printf("%d ", arr2[i]);

    }
     printf("\n");

   

  
   return 0;
}
