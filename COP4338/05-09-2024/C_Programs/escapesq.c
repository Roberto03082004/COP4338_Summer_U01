#include<stdio.h>
int main(){
	printf("hello \n world\n");
	printf("Good \t Morning\n");
	printf("\" Hello \"\n");
	printf("\' good day\'\n");

	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	if(num == 5)
		printf("\a");
	printf("%lu\n",sizeof(num));
	

}
