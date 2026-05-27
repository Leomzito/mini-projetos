#include <stdio.h>
#include <windows.h>
int main (){
	SetConsoleOutputCP(65001);
	float a,b,resul;
	int op;
	
	printf("Escolha uma opção \n");
	printf("1) Média aritmética entre dois números \n");
	printf("2) Diferença do maior pelo menor número \n");
	printf("3) Produto entre os números digitados \n");
	printf("4) Divisão do primeiro pelo segundo \n");
	
	printf("Digite a opcao acima: ");
	scanf("%d",&op);	
	printf("Digite valor A: ");
	scanf("%f",&a);
	printf("Digite valor B: ");
	scanf("%f",&b);
	
	switch(op){
		case 1:
			resul=(a+b)/2;
			printf("Resultado é: %f",resul);
			break;
		case 2:
			if(a>b){
			resul=a-b;
			printf("Resultado é: %f",resul);
			}
			else{
				resul=b-a;
				printf("Resultado é: %f",resul);
			}
			break;
		case 3:
			resul=a*b;
			printf("Resultado é: %f",resul);
			break;
		case 4:
			if(b==0){
			printf("Operação invalida!");
			}
			else{
				resul=a/b;
				printf("Resultado é: %f",resul);
			}
			break;
		default:
			printf("Opção invalida!");
	}
	system("pause");
}
	
