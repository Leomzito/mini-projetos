#include<stdio.h>
int main(){
	int i=1,idade,total=0;
	float media;
	do{
		printf("digite a idade da pessoa %d: ",i);
		scanf("%d",&idade);
		total=idade+total;
		media=total/i;
		i++;
	}while(i<=5);	
	printf("a media das idades e: %f",media);
}