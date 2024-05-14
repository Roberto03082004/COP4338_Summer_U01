#include<stdio.h>

int main(){

  unsigned int x, y;

  printf("Enter value for x:");
  scanf("%u", &x);
  printf("Enter value for y:");
  scanf("%u", &y);

  printf("%u AND %u = %u\n", x,y,x&y);
  printf("%u OR %u = %u\n", x,y,x|y);
  printf("%u XOR %u = %u\n", x,y,x^y);
  printf("NOT of %u = %u\n", x, ~x);
  printf("NOT of %u = %u\n", y, ~y);
  printf("LEFT SHIFT %u by 1 = %u\n", x,x<<1);
  printf("LEFT SHIFT %u by 1 = %u\n", y,y<<1);
  printf("RIGHT SHIFT %u by 1 = %u\n", x,x>>1);
  printf("RIGHT SHIFT %u by 1 = %u\n", y,y>>1);






}
