//Exercício 7)
//Leia um vetor de 10 números inteiros e, em seguida, leia um número X. 
// Verifique se o valor X está presente no vetor.
//Dica: percorra o vetor comparando cada elemento com X.

#include <stdio.h>
int main() {
    int vetor[10]; 
    int i, X;
    int encontrado = 0; // variavel para indicar se X foi encontrado

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero X para verificar se esta presente no vetor: ");
    scanf("%d", &X);

    for (i = 0; i < 10; i++) {
        if (vetor[i] == X) { // verifica se o elemento do vetor é igual a X
            encontrado = 1; // marca como encontrado
            break; // sai do loop, pois já encontrou X
        }
    }

    if (encontrado) {
        printf("O numero %d esta presente no vetor.\n", X);
    } else {
        printf("O numero %d nao esta presente no vetor.\n", X);
    }

    return 0;
}