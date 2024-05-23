#include<stdio.h>
int linearSearch(int arr[], int size, int value);
void printArray(int arr[], int size);
int binarySearch(int arr[], int low, int high, int value);

int main(){

  int arr[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int size = sizeof(arr)/sizeof(arr[0]);
  int value = 33;
  
  printArray(arr, size);

  int linearIndex = linearSearch(arr, size, value);

  //Linear Search
  if(linearIndex != -1)
    printf("Linear Search: Value %d found at index %d\n", value, linearIndex);
  else
    printf("Linear Search: Value %d not found in the array\n", value);

  //Binary Search
  
  int binaryIndex = binarySearch(arr, 0, size - 1, value);

  if(binaryIndex != -1)
    printf("Binary Search: Value %d found at index %d.\n", value, binaryIndex);
  else
    printf("Binary Search: Value %d not found in the array.\n", value);
  return 0;
}

int linearSearch(int arr[], int size, int value){
  for(int i = 0; i < size; i++){
    if(arr[i] == value)
      return i;
  }
  return -1;
}

int binarySearch(int arr[], int low, int high, int value){
  while(low <= high){
    int mid = low + (high - low)/2;

    if(arr[mid] == value)
      return mid;
    if(arr[mid] < value)
      low = mid + 1;
     else
      high = mid - 1;
  }
  return -1;
}
void printArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
