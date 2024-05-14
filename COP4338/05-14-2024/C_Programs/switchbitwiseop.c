#include <stdio.h>
#include <stdlib.h>
int main(){

  unsigned int x, y, result;
  char op;
  printf("Enter a value for x: ");
  scanf("%u", &x);
  printf("Enter a value for y: ");
  scanf("%u", &y);

  printf("Enter the bitwise operator (& (AND), | (OR), ^ (XOR), ~ (NOT), < (LEFT SHIFT), > (RIGHT SHIFT)): ");
  scanf(" %c", &op);


  switch(op){
    case '&': printf("%u %c %u = %u\n", x,op,y,x&y); break;
    case '|': printf("%u %c %u = %u\n", x,op,y,x|y); break;
    case '^': printf("%u %c %u = %u\n", x,op,y,x^y); break;
    case '~': printf("%c%u = %u\n", x,op,~x); printf("%c%u = %u\n", op,y,~y); break;
    case '<': printf("%c%u by 1 = %u\n", op,x,x<<1); printf("%c%u by 1 = %u\n", op,y,y<<1); break;
    case '>': printf("%c%u by1 = %u\n", op,x,x>>1); printf("%c%u by 1 = %u\n", op,y,y>>1); break;
    default: printf("Invalid Bitwise Operator.\n"); exit(0);
  }



}
