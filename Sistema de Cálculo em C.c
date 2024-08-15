#include <stdio.h>

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: divis�o por zero!\n");
        return 0;
    }
}

int main() {
    int opcao;
    float num1, num2, resultado;

    while (1) {
        printf("Escolha a opera��o:\n");
        printf("1. Soma\n");
        printf("2. Subtra��o\n");
        printf("3. Multiplica��o\n");
        printf("4. Divis�o\n");
        printf("5. Sair\n");
        printf("Op��o: ");
        scanf("%d", &opcao);

        if (opcao == 5) {
            break;
        }

        if (opcao < 1 || opcao > 5) {
            printf("Op��o inv�lida! Tente novamente.\n");
            continue;
        }

        printf("Digite o primeiro n�mero: ");
        scanf("%f", &num1);
        printf("Digite o segundo n�mero: ");
        scanf("%f", &num2);

        switch (opcao) {
            case 1:
                resultado = soma(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = subtracao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicacao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                resultado = divisao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            default:
                printf("Op��o inv�lida!\n");
                break;
        }
    }

    printf("Programa encerrado.\n");
    return 0;
}

