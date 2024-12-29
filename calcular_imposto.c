#include "calcular_imposto.h"

float calcularImposto(int faixa, float salarioBruto) {
    float aliquota;

    switch (faixa) {
        case 1:
            aliquota = 0.05;
            break;
        case 2:
            aliquota = 0.10;
            break;
        case 3:
            aliquota = 0.15;
            break;
        default:
            return -1;
    }
    return salarioBruto * aliquota;
}
.
