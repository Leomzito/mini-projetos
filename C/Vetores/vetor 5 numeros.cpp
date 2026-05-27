#include <stdio.h>
int main(){
	int vetor[5];
	for(int i=0;i<5;i++){
		printf("digite o valor %d\n",i+1);
		scanf("%d",&vetor[i]);
	}
	for(int i=0;i<5;i++){
		printf("%d ",vetor[i]);
	}
	return 0;
}