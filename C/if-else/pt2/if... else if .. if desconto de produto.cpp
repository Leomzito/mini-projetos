#include<stdio.h>
int main(){
	int quant;
	float preco,total,desc;
	printf("digite o preco do produto: ");
	scanf("%f",&preco);
	printf("digite a quantidade do produto: ");
	scanf("%d",&quant);
	total=quant*preco;
	if(total<=100){
		desc=total-(total*0.05);
		printf("valor final: %f",desc);
		
	}
	else if(total>=100||total<=1000){
		desc=total-(total*0.07);
		printf("valor final: %f",desc);
	}
	else{
		(total>1000);		
		desc=total-(total*0.1);
		printf("valor final: %f. Cleinte VIP",desc);
	}
}