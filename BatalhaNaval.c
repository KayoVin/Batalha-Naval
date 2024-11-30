#include <stdio.h>

int main() {
    char jogador1[30], jogador2[30];  // O uso de um vetor maior foi dado pois, se um player com um nome mais longo decidir colocar em 
                                      //um vetor pequeno poderia dar erro de truncamento ou acesso inválido á memória.

    // Leitura dos nomes dos jogadores
    printf("Digite o nome do Jogador 1: ");
    scanf("%s", jogador1);  // Lê a string e armazena em jogador1

    printf("Digite o nome do Jogador 2: ");
    scanf("%s", jogador2);  // Lê a string e armazena em jogador2

    // Exibe os nomes informados
    printf("Jogador 1: %s\n", jogador1);
    printf("Jogador 2: %s\n", jogador2);

    return 0;
}
