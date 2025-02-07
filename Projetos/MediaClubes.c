#include <stdio.h>

int main() {
    int clube, cidade, numEntrevistados = 0, niteroiOutros = 0;
    int contClubes[5] = {0}; 
    float somaSalarios[5] = {0}; 

    while (1) {
        printf("Digite o clube de futebol de preferência (1-Flamengo, 2-Vasco, 3-Fluminense, 4-Botafogo, 5-Outros, 0 para sair): ");
        scanf("%d", &clube);

        if (clube == 0) break;

        if (clube < 1 || clube > 5) {
            printf("Opção de clube inválida.\n");
            continue;
        }

        float salario;
        printf("Digite o seu salário: ");
        scanf("%f", &salario);

        printf("Digite o número da sua cidade (1-Rio de Janeiro, 2-Niterói, 3-Outras): ");
        scanf("%d", &cidade);

        numEntrevistados++;
        contClubes[clube - 1]++;
        somaSalarios[clube - 1] += salario; 

        if (clube == 5 && cidade == 2) niteroiOutros++; 
    }

    // Resultados
    printf("\nResultados da Pesquisa:\n");
    const char *clubes[] = {"Flamengo", "Vasco", "Fluminense", "Botafogo", "Outros"};
    for (int i = 0; i < 5; i++) {
        printf("%s: %d torcedores, Média salarial: %.2f\n",
               clubes[i], contClubes[i],
               contClubes[i] > 0 ? somaSalarios[i] / contClubes[i] : 0);
    }

    printf("Pessoas de Niterói que não torcem para os principais clubes do Rio: %d\n", niteroiOutros);
    printf("Número total de pessoas entrevistadas: %d\n", numEntrevistados);

    return 0;
}

