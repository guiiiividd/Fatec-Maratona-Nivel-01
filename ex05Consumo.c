#include <stdio.h>
 
int main() {
 
    int distancia;
    float totalCombustivelGasto, consumo;
    
    scanf("%i", &distancia);
    scanf("%f", &totalCombustivelGasto);
    
    consumo = distancia / totalCombustivelGasto;
    
    printf("%.3f km/l\n", consumo);
 
    return 0;
}