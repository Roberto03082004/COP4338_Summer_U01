// Write a C program that will ask user to input a single character
// You will print the equivalent ASCII code of the character

#include<stdio.h>

int main(){
  
  char character;

  printf("Enter a single character: ");
  scanf(" %c", &character);

  //Print the ASCII code of the character
  printf("ASCII code of '%c' is: %d\n", character, character);
  

  printf("Enter ASCII code to find character:");
  scanf("%d", &character);

  printf("The character of ASCII code '%d' is: %c\n", character, character);


  return 0;



}
