#include<stdio.h>

int main()
{
    double valor, resto;
    int qtdNotasCem=0, qtdNotasCinquenta=0, qtdNotasVinte=0, qtdNotasDez=0, qtdNotasCinco=0, qtdNotasDois=0;
    int qtdMoedasReal=0, qtdMoedasCinquenta=0, qtdMoedasVinteCinco=0, qtdMoedasDez=0, qtdMoedasCinco=0;
    double qtdMoedasCentavo;
    
    scanf("%lf", &valor);
    
    // NOTAS
    qtdNotasCem = valor / 100;
    resto = valor - (qtdNotasCem*100);
    
    qtdNotasCinquenta = resto / 50;
    resto -= (qtdNotasCinquenta*50);
    
    qtdNotasVinte = resto / 20;
    resto -= (qtdNotasVinte*20);
    
    qtdNotasDez = resto / 10;
    resto -= (qtdNotasDez*10);
    
    qtdNotasCinco = resto / 5;
    resto -= (qtdNotasCinco*5);
    
    qtdNotasDois = resto / 2;
    resto -= (qtdNotasDois*2);
    
    // MOEDAS
    qtdMoedasReal = resto / 1;
    resto -= (qtdMoedasReal * 1);
    
    qtdMoedasCinquenta = resto / 0.5;
    resto -= (qtdMoedasCinquenta * 0.5);
    
    qtdMoedasVinteCinco = resto / 0.25;
    resto -= (qtdMoedasVinteCinco * 0.25);
    
    qtdMoedasDez = resto / 0.10;
    resto -= (qtdMoedasDez * 0.10);
    
    qtdMoedasCinco = resto / 0.05;
    resto -= (qtdMoedasCinco * 0.05);
   
    qtdMoedasCentavo = (resto*100.0);
    
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", qtdNotasCem);
    printf("%i nota(s) de R$ 50.00\n", qtdNotasCinquenta);
    printf("%i nota(s) de R$ 20.00\n", qtdNotasVinte);
    printf("%i nota(s) de R$ 10.00\n", qtdNotasDez);
    printf("%i nota(s) de R$ 5.00\n", qtdNotasCinco);
    printf("%i nota(s) de R$ 2.00\n", qtdNotasDois);
    
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", qtdMoedasReal);
    printf("%i moeda(s) de R$ 0.50\n", qtdMoedasCinquenta);
    printf("%i moeda(s) de R$ 0.25\n", qtdMoedasVinteCinco);
    printf("%i moeda(s) de R$ 0.10\n", qtdMoedasDez);
    printf("%i moeda(s) de R$ 0.05\n", qtdMoedasCinco);
    printf("%.0f moeda(s) de R$ 0.01\n", qtdMoedasCentavo);
    
    return 0;
}