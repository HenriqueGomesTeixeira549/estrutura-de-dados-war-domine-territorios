#include <stdio.h>
#include <string.h>

// Definição da struct Territorio (Requisito: Estrutura composta)
// Agrupa informações de diferentes tipos em uma única unidade lógica.
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Declaração de um vetor de structs para armazenar 5 territórios
    struct Territorio listaTerritorios[5];
    int i;

    printf("--- CADASTRO DE TERRITÓRIOS - JOGO WAR ---\n\n");

    // Cadastro dos territórios: Laço para entrada de dados
    for (i = 0; i < 5; i++) {
        printf("Digite os dados do %dº território:\n", i + 1);

        printf("Nome do território: ");
        scanf(" %[^\n]s", listaTerritorios[i].nome); // Lê string com espaços

        printf("Cor do exército: ");
        scanf("%s", listaTerritorios[i].cor);

        printf("Quantidade de tropas: ");
        scanf("%d", &listaTerritorios[i].tropas);

        printf("---------------------------\n");
    }

    // Exibição dos dados: Laço para percorrer o vetor e mostrar os resultados
    printf("\n--- TERRITÓRIOS REGISTRADOS ---\n");
    for (i = 0; i < 5; i++) {
        printf("Território: %s | Cor: %s | Tropas: %d\n", 
                listaTerritorios[i].nome, 
                listaTerritorios[i].cor, 
                listaTerritorios[i].tropas);
    }

    return 0;
}