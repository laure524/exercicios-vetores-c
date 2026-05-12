//Exercício 6)
//Leia 10 números inteiros e informe quantos são positivos, quantos são negativos e quantos são iguais a zero.
//Dica: utilize três variáveis contadoras.

#include <stdio.h>
int main() {
    int vetor[10]; 
    int i;
    int positivos = 0, negativos = 0, zeros = 0; // variaveis contadoras

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
        
        if (vetor[i] > 0) { // verifica se o número é positivo
            positivos++;
        } else if (vetor[i] < 0) { // verifica se o número é negativo
            negativos++;
        } else {
            zeros++;
        }
    }

    printf("\nQuantidade de numeros positivos: %d\n", positivos);
    printf("Quantidade de numeros negativos: %d\n", negativos);
    printf("Quantidade de numeros iguais a zero: %d\n", zeros);

    return 0;
}