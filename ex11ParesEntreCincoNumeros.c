#include <stdio.h>

int main(){
	int num, restoDivisao, i, qtdPares = 0;
	
	for(i = 0; i < 5; i++){
		scanf("%i", &num);
		
		restoDivisao = num % 2;
		if(restoDivisao == 0){
			qtdPares++;	
		}
	}
	
	printf("%i valores pares\n", qtdPares);
	
	return 0;
}