#include <stdio.h>
#include <math.h>


int main() {

    //declaração de variável

    int pecasproduzidas;
    int pecasdefeituosas;
    int soma;

    //saida e entrada

    printf("informe a quantidade de pecas produzidas : ");
    scanf("%d", &pecasproduzidas);


    printf("informe a quantidade de pecas defeituosas : ");
    scanf("%d", &pecasdefeituosas);

    //ação
    
    soma=pecasproduzidas*0.1;


    // precisa de manutencao

    if(pecasdefeituosas>soma) {
    printf("precisa de manutencao");
    }

    // nao precisa de manutencao

    else {
    printf("nao precisa de manutencao");
    }

}