#include<stdio.h>
#include <math.h>
int main(){
	float num,raiz;
	do{
		printf("digite um valor nao negativo: ");
		scanf("%f",&num);
	}while(num<0);
	raiz=sqrt(num);
	printf("a raiz de %f e: %f",num,raiz);
}