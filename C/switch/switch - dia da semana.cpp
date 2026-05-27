#include <stdio.h>
#include <windows.h>
int main (){
	SetConsoleOutputCP(65001);
	int diadaSemana;
	
	printf("Digite um valor de 1 a 7: ");
	scanf("%d",&diadaSemana);
	
	switch(diadaSemana){
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda");
			break;
		case 3:
			printf("Terça");
			break;
		case 4:
			printf("Quarta");
			break;
		case 5:
			printf("Quinta");
			break;
		case 6:
			printf("Sexta");
			break;
		case 7:
			printf("Sábado");
			break;
		default:
			printf("Valor invalido!");
			break;
	}
	
}
