#include <stdio.h>

int main(){
  int num;

  printf("Enter a number between 1 and 10: ");
  scanf("%d", &num);

  switch(num){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5: printf("Good job!\n"); break;
    
    case 6:
    case 7:
    case 8:
    case 9:
    case 10: printf("Better luck next time.\n"); break;

    default: printf("Invalid Number.\n");


  }


}
