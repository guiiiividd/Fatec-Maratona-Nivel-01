#include <stdio.h>

int main(){
	int qtdCasosTestes, i;
	float nota1, nota2, nota3, mediaPonderada;
	
	scanf("%i", &qtdCasosTestes);
	
	for(i = 0; i < qtdCasosTestes; i++){
		scanf("%f", &nota1);
		scanf("%f", &nota2);
		scanf("%f", &nota3);
		
		mediaPonderada = (nota1 * 0.2) + (nota2 * 0.3) + (nota3 * 0.5);
		printf("%.1f\n", mediaPonderada);
	}
	
	return 0;
}