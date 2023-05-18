#include <stdio.h>
 
int main() {
 
    int codigo, quantidade;
    float total;
    
    scanf("%i", &codigo);
    scanf("%i", &quantidade);
    
    if(codigo == 1){
        total = quantidade * 4;
    }else if(codigo == 2){
        total = quantidade * 4.5;
    }else if(codigo == 3){
        total = quantidade * 5;
    }else if(codigo == 4){
        total = quantidade * 2;
    }else{
        total = quantidade * 1.5;
    }
    
    printf("Total: R$ %.2f\n", total);
 
    return 0;
}