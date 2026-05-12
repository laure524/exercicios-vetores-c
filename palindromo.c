//Exercício 10)
//Leia uma palavra e verifique se ela é um palíndromo 
// (ou seja, se pode ser lida da mesma forma de trás para frente).
//Dica: compare os caracteres das extremidades (início e fim) do vetor.

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100]; 
    int i, j; 
    int palindromo = 1; // variavel para indicar se é palíndromo

    printf("Digite uma palavra: ");
    scanf("%s", palavra); 

    int tamanho = strlen(palavra); // indica o tamanho da palavra

    // compara os caracteres das extremidades do vetor
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) { // verifica se os caracteres são diferentes
            palindromo = 0; // marca como não palíndromo
            break; // sai do loop, pois já encontrou uma diferença
        }
    }

    if (palindromo) {
        printf("A palavra '%s' eh um palindromo.\n", palavra);
    } else {
        printf("A palavra '%s' nao eh um palindromo.\n", palavra);
    }

    return 0;
}