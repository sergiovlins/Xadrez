#include <stdio.h>

int main()
{
    int casasTorre = 0;
    int casasBispo = 6;
    int casasRainha = 9;
    int b = 1; // Variavel de apoio
    int j = 1; // Variavel de apoio

    for (casasTorre; casasTorre <= 5; casasTorre++)
    {
        if (casasTorre == 0)
        {
            printf("Torre está no seu ponto inicial\n");
        }
        else if (casasTorre > 0 && casasTorre <= 5)
        {
            printf("Torre: ");
            printf("Se deslocando a direita %d vezes\n", casasTorre);
        }
    }

    while (b < casasBispo)
    {
        if (b == 1)
        {
            printf("Bispo está no seu ponto inicial\n");
        }
        printf("Bispo está se movendo para cima e direita %d vezes\n", b);
        b++;
    }

    do
    {
        if (j == 1)
        {
            printf("Rainha está no seu ponto inicial\n");
        }
        printf("Rainha está se deslocando para a esquerda %d vezes\n", j);
        j++;
    } while (j < casasRainha);
}
