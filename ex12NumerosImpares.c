#include <stdio.h>

int main(){
	int num, i;
	
	scanf("%i", &num);
	for(i = 1; i <= num; i += 2){
		printf("%i\n", i);
	}
	
	return 0;
}