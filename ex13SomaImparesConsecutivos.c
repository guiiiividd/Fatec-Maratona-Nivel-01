#include <stdio.h>

int main(){
	int num1, num2, maiorNum, menorNum; 
	int i = 1, somaImpares = 0, restoDivisao;
	
	scanf("%i", &num1);
	scanf("%i", &num2);
	
	if(num1 > num2){
		maiorNum = num1;
		menorNum = num2;
	}else{
		maiorNum = num2;
		menorNum = num1;
	}
	
	for(i += menorNum; i < maiorNum; i++){
		restoDivisao = i % 2;
		if(restoDivisao != 0){
			somaImpares += i;
		}
	}
		
	printf("%i\n", somaImpares);
	
	return 0;
}