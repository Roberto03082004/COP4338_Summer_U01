#include<stdio.h>
void main(void){
	int num;
	short int si;
	unsigned int ui;
	long int li;
	long long int lli;
	float fl;
	double dd;
	char ch;
	

	printf("Enter value for num:");
	scanf("%d", &num);
	printf("Enter value for short int:");
	scanf("%hd", &si);
	printf("Enter value for unsigned int:");
	scanf("%u", &ui);
	printf("Enter value for long int:");
	scanf("%ld", &li);
	printf("Enter value for long long int:");
	scanf("%lld", &lli);
	printf("Enter value for float:");
	scanf("%f", &fl);
	printf("Enter value for double:");
	scanf("%lf", &dd);
	printf("Enter value for char:");
	scanf(" %c", &ch);
}
