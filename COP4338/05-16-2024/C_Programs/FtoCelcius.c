#include<stdio.h>

#define START 0
#define END 600
#define INCREMENT 40

int main(){
  //int start_fahrenheit = 0;
  //int end_fahrenheit = 300;
  //int increment = 20;
  float fahrenheit;

  printf("Fahrenheit\tCelcius\n");
  for (fahrenheit = START; fahrenheit <= END; fahrenheit += INCREMENT){
      float celcius = (fahrenheit - 32) * 5.0 / 9.0;
      printf("%.2f\t\t%.3f\n", fahrenheit, celcius);

  }

  return 0;



}
