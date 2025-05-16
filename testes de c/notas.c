#include <stdio.h>

int main()
{
    float N1, N2, N3, N4, media;
    int opçao;
    int testeRegistro = 0;

    while (opçao != 3)
    {
        printf("\n\n###BOLETIM DO ALUNO###\n");
        printf("1. Registre as notas\n");
        printf("2. Verificar a média\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opçao);

        switch (opçao)
        {
        case 1:
            printf("Registre a primeira nota: ");
            scanf("%f", &N1);
            while (N1 > 10 || N1 < 0)
            {
                printf("A nota não pode ser negativa ou maior que 10 !\n");
                printf("Registre uma nova nota: ");
                scanf("%f", &N1);
            }

            printf("Registre a segunda nota: ");
            scanf("%f", &N2);

            while (N2 > 10 || N2 < 0)
            {
                printf("A nota não pode ser negativa ou maior que 10 !\n");
                printf("Registre uma nova nota: ");
                scanf("%f", &N2);
            }

            printf("Registre a terceira nota: ");
            scanf("%f", &N3);

            while (N3 > 10 || N3 < 0)
            {
                printf("A nota não pode ser negativa ou maior que 10 !\n");
                printf("Registre uma nova nota: ");
                scanf("%f", &N3);
            }
            printf("Registre a quarta nota: ");
            scanf("%f", &N4);

            while (N4 > 10 || N4 < 0)
            {
                printf("A nota não pode ser negativa ou maior que 10 !\n");
                printf("Registre uma nova nota: ");
                scanf("%f", &N4);
            }

            media = (N1 + N2 + N3 + N4) / 4;
            testeRegistro++;

            break;
        case 2:
            if (testeRegistro == 0)
            {
                printf("###É necessário registrar as notas antes de verificar a média !!###\n\n");
            }
            else if (media == 10)
            {
                printf("Aprovado com nota máxima\n\n");
            }
            else if (media >= 7)
            {
                printf("Aprovado com média %.1f\n\n", media);
            }
            else if (media >= 4 && media < 7)
            {
                printf("Recuperação\n\n");
            }
            else
            {
                printf("Reprovado\n\n");
            }

            break;
        case 3:
            printf("Você escolheu sair");
            break;

        default:
            printf("Opção Invalida");
            break;
        }
    }
}