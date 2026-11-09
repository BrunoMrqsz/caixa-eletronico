#include <stdio.h>
#include <string.h>

int main() {

    char palavra[16];
    char criptografada[16];

    int shift;
    int sequencia[15];

    int tamanho;
    int i;

    printf("Digite a palavra secreta: ");
    scanf("%15s", palavra);

    printf("Digite o valor de SHIFT: ");
    scanf("%d", &shift);

    tamanho = strlen(palavra);

    /* Gerando a sequencia de Fibonacci */

    sequencia[0] = 1;

    if (tamanho > 1) {
        sequencia[1] = 1;
    }

    for (i = 2; i < tamanho; i++) {
        sequencia[i] = sequencia[i - 1] + sequencia[i - 2];
    }

    /* Aplicando a criptografia */

    for (i = 0; i < tamanho; i++) {

        int deslocamento;

        deslocamento = shift + sequencia[i];

        criptografada[i] =
            ((palavra[i] - 'a' + deslocamento) % 26) + 'a';
    }

    criptografada[tamanho] = '\0';

    printf("\nPalavra criptografada: %s\n", criptografada);

    return 0;
}