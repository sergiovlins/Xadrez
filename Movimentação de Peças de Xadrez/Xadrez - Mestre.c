#include <stdio.h>

void casasTorre(int PassosTorre)
{

    for (PassosTorre; PassosTorre <= 5; PassosTorre++)
    {
        if (PassosTorre == 0)
        {
            printf("Torre está no seu ponto inicial\n");
        }
        else if (PassosTorre > 0 && PassosTorre <= 5)
        {
            printf("Torre: ");
            printf("Se deslocando a direita %d vezes\n", PassosTorre);
        }
    }
}

void casasBispo(int PassosBipo)
{
    for (int PassosAtual = 1; PassosAtual <= 5; PassosAtual++)
    {

        if (PassosAtual == 1)
        {
            printf("O bispo está em seu ponto inicial\n");
        }

        for (int PassoHorizontal = 1; PassoHorizontal <= PassosAtual; PassoHorizontal++)
        {
            printf("Bispo: Está se deslocando para cima e direita %d, %d\n", PassosAtual, PassoHorizontal);
        }
        }
}

void casasRainha(int PassosRainha)
{
    for (PassosRainha; PassosRainha <= 8; PassosRainha++)
    {
        if (PassosRainha == 0)
        {
            printf("Rainha está no seu ponto inicial\n");
        }
        else if (PassosRainha > 0 && PassosRainha <= 8)
        {
            printf("Rainha: ");
            printf("Se deslocando para esquerda %d vezes\n", PassosRainha);
        }
    }
}

void casasCavalo(int PassosCavalo)
{
    for (int Movimento = 0; Movimento < PassosCavalo; Movimento++)
    {

        for (int passoBaixo = 1; passoBaixo < 3; passoBaixo++)
        {
            if (passoBaixo == 1)
            {
                printf("Cavalo está no seu ponto inicial\n");
            }
            printf("Cavalo está se movendo para baixo %d vezes\n", passoBaixo);
        }

        for (int PassoLado = 1; PassoLado < 2; PassoLado++)
        {
            if (PassoLado == 1)
            {
                printf("Cavalo se mecherá para esquerda ou para direita, no movimento do L\n");
            }
            printf("Cavalo se mecheu para a esquerda %d vez\n", PassoLado);
        }
    }
}

int main()
{

    casasTorre(0);

    casasBispo(0);

    casasRainha(0);

    casasCavalo(1);
}