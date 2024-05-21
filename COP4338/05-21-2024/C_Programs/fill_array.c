#include<stdio.h>
#include<stdlib.h>
void fillarray(int arr[], int size);
void printarray(int arr[], int size);

int main(){
  printf("Enter size of array: ");
  int size;
  scanf("%d", &size);
  int arr[size];
  fillarray(arr,size);
  printarray(arr,size);


  return 0;
}

void fillarray(int arr[], int size){
  for(int i =0;i<size; i++)
    arr[i] = rand() % 100;
}

void printarray(int arr[], int size){
  for(int i =0; i< size; i++)
    printf("%d ", arr[i]);
  printf("\n");


}

