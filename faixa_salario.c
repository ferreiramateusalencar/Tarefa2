#include <stdio.h>
#include "calcular_imposto.h"

int main() {
    int faixaSalarial;
    float salarioBruto, imposto;

    printf("Escolha a faixa salarial:\n");
    printf("1 - Ate R$ 2.000\n");
    printf("2 - De R$ 2.001 ate R$ 5.000\n");
    printf("3 - Acima de R$ 5.000\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &faixaSalarial);

    if (faixaSalarial < 1 || faixaSalarial > 3) {
        printf("Faixa salarial invalida. Por favor, escolha uma opcao entre 1 e 3.\n");
        return 1; 
    }

    printf("Digite o seu salario bruto: R$ ");
    scanf("%f", &salarioBruto);

    if (salarioBruto <= 0) {
        printf("O salario bruto deve ser um valor positivo.\n");
        return 1;
    }

    imposto = calcularImposto(faixaSalarial, salarioBruto);

    if (imposto >= 0) {
        printf("O valor do imposto a ser pago é: R$ %.2f\n", imposto);
    } else {
        printf("Erro ao calcular do imposto.\n");
    }

    return 0;
}
