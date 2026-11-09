#include <stdio.h>

int main() {
    int saque;
    int saldo = 1000;

    int nota100, nota50, nota20, nota10, nota5;
    int restante;

    printf("=== CAIXA ELETRONICO ===\n");
    printf("Saldo disponivel: R$ %d,00\n\n", saldo);

    printf("Digite o valor que deseja sacar: R$ ");
    scanf("%d", &saque);

    if (saque <= 0) {
        printf("\nErro: o valor do saque deve ser maior que zero.\n");
    }
    else if (saque > saldo) {
        printf("\nErro: saldo insuficiente.\n");
    }
    else if (saque % 5 != 0) {
        printf("\nErro: o valor deve ser multiplo de R$ 5,00.\n");
    }
    else {
        restante = saque;

        nota100 = restante / 100;
        restante = restante % 100;

        nota50 = restante / 50;
        restante = restante % 50;

        nota20 = restante / 20;
        restante = restante % 20;

        nota10 = restante / 10;
        restante = restante % 10;

        nota5 = restante / 5;

        printf("\nSaque autorizado!\n");
        printf("Valor do saque: R$ %d,00\n\n", saque);

        printf("Notas entregues:\n");

        if (nota100 > 0)
            printf("%d nota(s) de R$ 100,00\n", nota100);

        if (nota50 > 0)
            printf("%d nota(s) de R$ 50,00\n", nota50);

        if (nota20 > 0)
            printf("%d nota(s) de R$ 20,00\n", nota20);

        if (nota10 > 0)
            printf("%d nota(s) de R$ 10,00\n", nota10);

        if (nota5 > 0)
            printf("%d nota(s) de R$ 5,00\n", nota5);

        saldo = saldo - saque;

        printf("\nSaldo restante: R$ %d,00\n", saldo);
    }

    return 0;
}