//Exercício 9)
//Leia uma palavra e informe quantos caracteres ela possui.
//Dica: percorra o vetor de caracteres até encontrar o caractere nulo ('\0').

#include <stdio.h>
int main() {
    char palavra[100]; 
    int i = 0; 

    printf("Digite uma palavra: ");
    scanf("%s", palavra); 

    // percorre o vetor de caracteres até encontrar o caractere nulo
    while (palavra[i] != '\0') {
        i++; // incrementa o contador para cada caractere
    }

    printf("A palavra '%s' possui %d caracteres.\n", palavra, i);

    return 0;
}