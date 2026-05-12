//Exercício 8)
//Leia dois vetores A e B, cada um com 10 números inteiros. Crie um terceiro vetor C onde cada posição será a soma dos elementos correspondentes de A e B.
//Dica: use o mesmo índice para acessar os dois vetores ao mesmo tempo.

#include <stdio.h>
int main() {
    int A[10], B[10], C[10]; 
    int i;

    printf("Digite 10 numeros inteiros para o vetor A:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nDigite 10 numeros inteiros para o vetor B:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &B[i]);
    }

    // calcula a soma dos elementos correspondentes de A e B e armazena em C
    for (i = 0; i < 10; i++) {
        C[i] = A[i] + B[i];
    }

    printf("\nVetor C (soma de A e B):\n");
    for (i = 0; i < 10; i++) {
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}