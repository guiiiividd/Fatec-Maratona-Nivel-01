#include <stdio.h>

int main(){
	
	int num, valorTabuada, i;

	scanf("%i", &num);
	
	for(i = 1; i <= 10; i++){
		valorTabuada = num * i;
		printf("%i x %i = %i\n", i, num, valorTabuada);
	}
	
	return 0;
}