//Exercício 1)
//Declare um vetor de 10 números inteiros. Leia os valores digitados 
// pelo usuário e, ao final, exiba todos os elementos do vetor na tela.
//Dica: utilize um laço de repetição para leitura e outro para exibição; 
// lembre-se que os índices vão de 0 até 9.

#include <stdio.h>

int main() {
    int vetor[10]; // Declaração do vetor de 10 números inteiros
    int i;

    // Leitura dos valores digitados pelo usuário
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Exibição dos elementos do vetor
    printf("\nOs numeros digitados foram:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}