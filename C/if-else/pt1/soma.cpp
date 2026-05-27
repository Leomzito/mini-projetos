#include<stdio.h>;
int main(){
	int num1,num2,soma;
	printf("digite o valor 1: ");
	scanf("%d",&num1);
	printf("digite o valor 2: ");
	scanf("%d",&num2);
	if(num1>num2){
		soma=100+num1;
		printf("a soma de %d com 100 e: %d",num1,soma);
	}
	else{
		soma=100+num2;
		printf("a soma de %d com 100 e: %d",num2,soma);
	}
}