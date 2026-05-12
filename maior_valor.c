//Exercício 4)
//Leia 10 números inteiros e determine qual é o maior valor presente no vetor.
//Dica: inicialize uma variável com o primeiro elemento do vetor e compare com os demais.

#include <stdio.h>
int main() {
    int vetor[10]; 
    int i, maior;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0]; // inicializa c/ o primeiro elemento do vetor
    for (i = 1; i < 10; i++) { // começa a comparação a partir do segundo elemento
        if (vetor[i] > maior) { // verifica se o elemento atual é maior que o maior encontrado
            maior = vetor[i];
        }
    }

    printf("\nO maior numero digitado eh: %d\n", maior);

    return 0;
}