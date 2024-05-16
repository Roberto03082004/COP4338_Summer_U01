#include<stdio.h>

float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main(){
  float num1, num2;
  char operator;

  //Input and Operators from user
  printf("Enter first number: ");
  scanf("%f", &num1);
  printf("Enter oeprator (+, -, *, /): ");
  scanf(" %c", &operator);
  printf("Enter second number: ");
  scanf("%f", &num2);

  //Caculation based on operator
  

  switch(operator){


    case '+':
      printf("Result: %.2f\n", add(num1, num2));
      break;
    case '-':
      printf("Result: %.2f\n", subtract(num1, num2));
      break;
    case '*':
      printf("Result: %.2f\n", multiply(num1, num2));
      break;
    case '/':
      if(num2 != 0){
      printf("Result: %.2f\n", divide(num1, num2));
    }else{
      printf("Cant divide by 0\n");
    }
      break;
    defualt: printf("Erorr: Invalid Operator\n");
  }
  return 0;
}

//Function to add 
float add(float num1, float num2){
  return num1 + num2;
}
//Function to subtract
float subtract(float num1, float num2){
  return num1 - num2;
}
//Function to multiply
float multiply(float num1, float num2){
  return num1 * num2;
}
//Function to divide
float divide(float num1, float num2){
  return num1 / num2;
}
