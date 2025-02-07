#include <stdio.h> 

int main() {

    float sf, v, min, med, max;

    printf("Insira o valor do seu salário fixo: R$");
    scanf("%f", &sf);
    printf("Insira o valor de vendas efetuadas neste mês: R$");
    scanf("%f", &v);

    min = sf + 500;
    med = sf + 700;
    max = sf + 1000;

    if (v > 1000 && v <= 5000){
        printf("\nSeu salário final e: R$%.2f\n", min);
        printf("Seu prêmio foi de: R$500.00");
    }

    if (v > 5000 && v <= 7500){
        printf("\nSeu salário final e: R$%.2f\n", med);
        printf("Seu prêmio foi de: R$700.00");
    }

    if (v > 7500){
        printf("\nSeu salário final e: R$%.2f\n", max);
        printf("Seu prêmio foi de: R$1000.00");
    }
    
}