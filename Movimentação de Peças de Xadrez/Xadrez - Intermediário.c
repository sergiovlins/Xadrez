#include <stdio.h>

int main()
{
    int casasTorre = 0;
    int casasBispo = 6;
    int casasRainha = 9;
    int casasCavalo = 4; 
    int PassoAtualB = 1, PassoAtualR = 1; // Variavel de apoio

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

    while (PassoAtualB < casasBispo)
    {
        if (PassoAtualB == 1)
        {
            printf("Bispo está no seu ponto inicial\n");
        }
        printf("Bispo está se movendo para cima e direita %d vezes\n", PassoAtualB);
        PassoAtualB++;
    }

    do
    {
        if (PassoAtualR == 1)
        {
            printf("Rainha está no seu ponto inicial\n");
        }
        printf("Rainha está se deslocando para a esquerda %d vezes\n", PassoAtualR);
        PassoAtualR++;
    } while (PassoAtualR < casasRainha);

    /*for (int c = 0;;c++)
    {
       
        int casasCavalo = 4;
        for (casasCavalo; c < casasCavalo; c++)
        {
            if (c == 1)
            {
                printf("Cavalo está no seu ponto inicial\n");
            }
            else if (c > 0 && c < 4)
            {
                printf("Cavalo está se mechendo para baixo\n");
            }
            else if (c == casasCavalo)
            {
                printf("Cavalo está se movendo para a esquerda");
            }
        }
    }*/

    for (int PassoAtualC = 1; PassoAtualC <= casasCavalo; PassoAtualC++)
    {
       while (PassoAtualC <= casasCavalo)
       {
        if (PassoAtualC == 1)
        {
            printf("Cavalo está no seu ponto inicial\n");
        }
        else if (PassoAtualC > 0 && PassoAtualC < 4)
        {
            printf("Cavalo está se mechendo para baixo\n");
        }
        else if (PassoAtualC == casasCavalo)
        {
            printf("Cavalo está se movendo para a esquerda");
        }
        PassoAtualC++;
       }
       
       
    }
    
   
}