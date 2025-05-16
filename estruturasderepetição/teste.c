#include <stdio.h>

int main()
{

    /*int i = 0;

    while ( i <= 10 )
    {
        if (i % 2 == 0) // Se o resto da divisão for igual a 0, então o numero é par
        {
            printf("%d", i);

        }



        i++;
    }
    */

    /* int i;

     do
     {
         printf("Insira um numero par para sair do código: ");
         scanf("%d", &i);

         if (i % 2 == 0)
         {
             printf("O numero é par, passou\n");
         } else {
             printf("O Numero é impar\n");
         }

     } while (i % 2 !=0);

     printf ("Saindo com exito");

 */
    int numero, i; 

    printf("Digite um numero de 0 a 10: "); 
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++)
    {
       printf("%d x %d = %d \n", numero, i , numero * i);
    }
    

    return 0;
}