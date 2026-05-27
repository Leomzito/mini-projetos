#include<stdio.h>
int main(){
	float precoa,precog,res;
	printf("digite o preco de litro do alcool: ");
	scanf("%f",&precoa);
	printf("digite o preco de litro da gasolina: ");
	scanf("%f",&precog);
	res=precoa/precog;
	if(res>0.7){
		printf("%f use gasolina",res);
	}
	else{
		printf("%f use alcool",res);
	}
}