#include<stdio.h>
int main(){
  //int arr[] = {4, 9, 5, 6, 8} 
  //int arr[5];
  printf("Enter size of array: ");
  int size;
  scanf("%d", &size);
  int array[size];
  printf("Enter %d values: ", size);
  for(int i = 0; i<5; i++)
    scanf("%d", &arr[i]);
printf("Array Values = ");
  for(int g = 0; g < 5; g++)
    printf("%d ", &arr[g]);
  printf("\n");
  return 0;
}
