#include<stdio.h>
#include<stdlib.h>


int main() {
    char nome[] = "vitor henrique de barros savioli";
    int soma = 0;

    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] >= 'a' && nome[i] <= 'z')
            soma += nome[i] - 'a' + 1;
        else if (nome[i] >= 'A' && nome[i] <= 'Z')
            soma += nome[i] - 'A' + 1;
    }

    printf("Resultado: %d = %d = %d\n", soma, soma % 10, soma % 10 == 0 ? 10 : soma % 10);

    return 0;
}
