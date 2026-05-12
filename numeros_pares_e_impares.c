//Exercício 2)
//Leia 10 números inteiros e mostre apenas os números pares armazenados no vetor.
//Dica: utilize o operador % para verificar se o número é par.

#include <stdio.h>

int main() {
    int vetor[10]; 
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nOs numeros pares digitados foram:\n");
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) { // verifica se o número é par
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}