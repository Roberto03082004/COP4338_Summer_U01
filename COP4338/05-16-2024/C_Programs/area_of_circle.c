#include<stdio.h>
#include<math.h>


float calculator_circle_area(float radius);

int main(){
  float radius, area;

  //Radius Input
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  //Calculate area
  area = calculator_circle_area(radius);

  //Print Result
  printf("The area of the circle with radis %.2f is %.2f\n", radius, area);

  return 0;


}

//Function to calculator area of circle
float calculator_circle_area(float radius){
  //const float pi = M_PI;
  return M_PI * radius * radius;

}
