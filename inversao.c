//Exercício 5)
//Leia 10 números inteiros e exiba os valores na ordem inversa da leitura.
//Dica: percorra o vetor do último índice até o primeiro.

#include <stdio.h>
int main() {
    int vetor[10]; 
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);   
        scanf("%d", &vetor[i]);
    }

    printf("\nOs numeros digitados na ordem inversa sao:\n");
    for (i = 9; i >= 0; i--) { // percorre o vetor do ultimo indice ate o primeiro
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}