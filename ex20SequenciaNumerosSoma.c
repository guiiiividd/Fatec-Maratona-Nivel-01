#include <stdio.h>

int main(){
	int m, n, maiorNum, menorNum, somaValores = 0, i;
	
	do{
		scanf("%i", &m);
		scanf("%i", &n);
		
		if(m > 0 && n > 0){	
			if(m > n){
				maiorNum = m;
				menorNum = n;
			} else{
				maiorNum = n;
				menorNum = m;
			}
			
			
			for(i = menorNum; i <= maiorNum; i++){
				printf("%i ", i);
				somaValores += i;
			}
			
			printf("Sum=%i\n", somaValores);
			somaValores = 0;
		}
		
	} while(m > 0 && n > 0);
	
	return 0;
}