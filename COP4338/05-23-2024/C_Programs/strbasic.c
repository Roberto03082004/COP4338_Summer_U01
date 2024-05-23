#include<stdio.h>
int main(){
  char str[50];
  //printf("Enter a word: ");
  printf("Enter a line: ");
  //scanf("%s", str);
  fgets(str, sizeof(str), stdin);
  puts(str);
  //printf("You entered %s\n", str);
  //printf("Last character: %c", str(5 - 1);
  return 0;
}
