#include<stdio.h>
int main(){
	float num1,num2,soma,mult,div;
	int cod;
	printf("digite o codigo (1,2 ou 3): ");
	scanf("%d",&cod);
	printf("digite o valor 1: ");
	scanf("%f",&num1);
	printf("digite o valor 2: ");
	scanf("%f",&num2);
	if(cod==1){
		soma=num1+num2;
		printf("a soma de %f com %f e: %f",num1,num2,soma);
	}
	else if(cod==2){
		mult=num1*num2;
		printf("a multiplicacao de %f com %f e: %f",num1,num2,mult);
	}
	else if(cod==3){
		div=num1/num2;
		if(num2==0){
			printf("operacao invalida");
		}
		else{
		printf("a multiplicacao de %f com %f e: %f",num1,num2,div);
		}
	}
	else{
		printf("codigo invalido");
		}	
	}
