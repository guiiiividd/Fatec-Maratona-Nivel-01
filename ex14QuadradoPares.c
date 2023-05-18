#include <stdio.h>

int main(){
	int num, valorCalculo, restoDivisao, i;

	scanf("%i", &num);
	
	for(i = 1; i <= num; i++){
		restoDivisao = i % 2;
		
		if(!restoDivisao){
			valorCalculo = i * i;
			printf("%i^2 = %i\n", i, valorCalculo);
		}
		
	}
	
	return 0;
}