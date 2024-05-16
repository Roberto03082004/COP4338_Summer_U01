#include<stdio.h>
int main(){
  int num, start, end;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Enter starting value: ");
  scanf("%d", &start);
  printf("Enter ending value: ");
  scanf("%d", &end);

  for(int i = start; i <= end; i++)
    printf("%d x %d = %d\n", num, i, num * i);
  



}
