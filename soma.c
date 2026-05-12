//Exercício 3)
//Leia 10 números inteiros e calcule a soma de todos os elementos do vetor. Ao final, exiba o resultado.
//Dica: use uma variável acumuladora para armazenar a soma.

#include <stdio.h>
int main() {
    int vetor[10]; 
    int i, soma = 0; // variável acumuladora p/ soma

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i]; // acumula a soma dos elementos
    }

    printf("\nA soma dos numeros digitados eh: %d\n", soma);

    return 0;
}