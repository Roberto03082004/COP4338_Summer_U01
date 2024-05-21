#include<stdio.h>
#include<stdlib.h>

int sumArray(int arr[], int size);
void fillArray(int arr[], int size);
void printArray(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
int aveArray(int arr[], int size);

int main(){
  int arr[10];
  int size = sizeof(arr)/sizeof(int);
  fillArray(arr,size);
  printArray(arr,size);
  printf("Sum of Array = %d\n", sumArray(arr,size));
  printf("Min Value = %d\n", findMin(arr,size));
  printf("Max Value = %d\n", findMax(arr, size));
  printf("Average of Array = %d\n", aveArray(arr,size));
  


  return 0;
}

int sumArray(int arr[], int size){
  int sum=0;
  for(int i=0;i < size; i++)
    sum+=arr[i];
  return sum;


}
void fillArray(int arr[], int size){
  for(int i = 0; i < size; i++)
    arr[i] = rand() % 100;
}

void printArray(int arr[], int size){
  for(int i = 0; i< size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}
int findMax(int arr[], int size){
  int max = arr[0];
  for(int i; i < size; i++)
    if(arr[i] > max)
      max = arr[i];
  return max;
}
int findMin(int arr[], int size){
  int min = arr[0];
  for(int i = 0; i < size; i++)
    if(arr[i] < min)
      min = arr[i];
return min;
}
int aveArray(int arr[], int size){
  int sum = sumArray(arr, size);
  return sum / size;
}
