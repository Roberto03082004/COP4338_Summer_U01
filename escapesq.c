#include<stdio.h>
void main(void){
	printf("hello \n world\n");
	printf("Good \t Morning\n");
	printf("\" Hello \"\n");
	printf("\' good day\'\n");

	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	if(num == 5)
		printf("\a");
	printf("%d\n",sizeof(num));
	

}
