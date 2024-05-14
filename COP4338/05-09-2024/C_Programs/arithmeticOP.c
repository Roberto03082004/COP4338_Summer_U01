#include<stdio.h>
int main(){
	double num1;
	double num2;
	double result;
	char op;

	printf("Enter first number: ");
	scanf("%lf", &num1);
	printf("Enter second number: ");
	scanf("%lf", &num2);

	while (getchar() != '\n');
	printf("Enter arithmatic operator: ");
	scanf(" %c", &op);

	switch(op){
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if(num2 != 0){
			result = num1 / num2;
			}else{
			printf("Error, cant divide by 0\n");
			return 1;
			}
			break;
		case '%':
			if((int)num1 == num1 && (int)num2 == num2){
				result = (int)num1 % (int)num2;
			}else{
				printf("Error, module operators can only be used on integers");
				return 1;
			}
		defualt:
			printf("Error, invalid operator\n");
			return 1;

	}
	printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);

	return 0;


}
