DESAFIO DO PROFESSOR SERGIO 

FAZER UM PROGRAMA QUE LE O NOME E FAZ A SOMA DO NOME


int main() {
    char nome[] = "Gustavo Basilio";
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
