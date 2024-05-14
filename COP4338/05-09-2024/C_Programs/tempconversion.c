#include<stdio.h>
int main(){
	float tempF, tempC;
	printf("Enter temperature in F: ");
	scanf("%f", &tempF);

	tempC = 5 * (tempF - 32) / 9;
	printf("%f F is %f C \n", tempF, tempC);


	printf("Adress of tempF = %p\n", &tempF);


}
