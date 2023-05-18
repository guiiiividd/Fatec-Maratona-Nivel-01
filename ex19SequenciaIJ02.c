#include <stdio.h>

int main(){
	int i = 1, j = 60, k = 0;
	
	for(i = 1; i < 10; i += 2){
		j = 7;
		
		for(k = 0; k < 3; k++){
			printf("I=%i J=%i\n", i, j);
			j--;
		}
	}
	
	return 0;
}