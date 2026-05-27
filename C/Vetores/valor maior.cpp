#include<stdio.h>
int main(){
	float valor[10],maior,menor;
	for (int i=0;i<10;i++){
		printf("digite o valor %d ",i+1);
		scanf("%f",&valor[i]);
	}
	maior=valor[0];
	menor=valor[0];
	for (int i=1;i<10;i++){
		if(valor[i]>maior){
			maior=valor[i];
		}
		if(valor[i]<menor){
			menor=valor[i];
		}
	}
	printf("o maior valor e: %f",maior);
	printf("o menor valor e: %f",menor);
}