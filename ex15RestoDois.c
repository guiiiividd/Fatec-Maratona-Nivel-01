#include <stdio.h>

int main(){
	int num, restoDivisao, i;
	
	scanf("%i", &num);
	
	for(i = 0; i < 10000; i++){
		restoDivisao = i % num;
		
		if(restoDivisao == 2){
			printf("%i\n", i);
		}
	}
	
	return 0;
}