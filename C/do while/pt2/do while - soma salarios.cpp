#include<stdio.h>
main(){
	float sal,total;
	while(sal>0){
		printf("digite o salario do funcionario ou digite um numero negativo para encerrar:");
		scanf("%f",&sal);
		if(sal>0){
			total=total+sal;
		}		
	}
	printf("a soma dos salarios e: %f",total);
}