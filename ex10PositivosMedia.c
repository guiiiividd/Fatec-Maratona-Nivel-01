#include <stdio.h>

int main(){
	
	int i, qtdValoresPositivos = 0;
	float num, soma = 0, media;
	
	for(i = 0; i < 6; i++){
		scanf("%f", &num);
		if(num > 0){
			soma += num;
			qtdValoresPositivos++;
		}
	}
	
	media = soma / qtdValoresPositivos;
	
	printf("%i valores positivos\n", qtdValoresPositivos);
	printf("%.1f\n", media);
}