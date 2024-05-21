#include<stdio.h>
void sortArray(int[], int);

int main(){
  int arr[] = {6, 1, -3, 8, -2, -4, 7, 3, -5};
  int size = sizeof(arr)/sizeof(int);
  printf("Original array: ");
    for (int i = 0; i < size; i++) 
        printf("%d ", arr[i]);
    printf("\n");

    sortArray(arr, size);
    
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) 
        printf("%d ", arr[i]);
    printf("\n");
  return 0;
}

void sortArray(int arr[], int size){
  int temp;
  for(int i = 0; i < size - 1; i++)
    for(int j = 0; j < size - 1; j++)
      if(arr[j] > arr[j + 1]){
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;   
  }
}
