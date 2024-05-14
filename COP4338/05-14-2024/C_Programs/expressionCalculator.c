#include <stdio.h>
#include <stdlib.h>
int main(){
  int num1, num2, result;
  char op;

  printf("Enter an Expression to evaluate: ");
  scanf("%d %c %d", &num1, &op, &num2);

  switch(op){
    
    case '+': result = num1 + num2; break;
    case '-': result = num1 - num2; break;
    case '*': result = num1 * num2; break;
    case '/': result = num1 / num2; break;
    case '%': result = num1 % num2; break;
    default: printf("Invalid Expression.\n"); exit(0);
  }

  printf("%d %c %d = %d\n", num1, op, num2, result);





}
