#include <stdio.h>
#include<stdlib.h>

/*
1 2 3 4

*/

int maiorValor(int a[], int tam){
    int i, maior, guarda;

    maior = a[0];
    for(i=0; i <= tam; i++)
        if(a[i] > maior){
            maior = a[i];
    }
    return maior;
}

int main(void){

    int tamanho, i, retorno;
    int array[100];

    scanf("%d", &tamanho);

    for(i=0; i < tamanho; i++)
    scanf("%d", &array[i]);

    retorno = maiorValor(array, tamanho);
    printf("Maior Valor: %d", retorno);

    return 0;
}
