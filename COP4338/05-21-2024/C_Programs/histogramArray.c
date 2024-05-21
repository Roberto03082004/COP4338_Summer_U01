#include<stdio.h>
void printHistogram(int value);

int main(){
    int arr[] = {4, 2, 3, 1, 5, 2, 4, 4, 3, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i  = 0; i  < size; i++){
    printf("Index = %d, Value = %d, ", i, arr[i]);
    printHistogram(arr[i]);
  }






  return 0;
}

void printHistogram(int value){
  printf("Histogram: ");
  for(int i = 0; i < value; i++)
    printf("*");
  printf("\n");
}
