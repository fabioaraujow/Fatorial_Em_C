#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int fat, calc, ret;
    double N;
    char car;

    printf("Insira o valor para o calculo: ");
    ret = scanf("%lf", &N);
    printf("\n");

    while (ret == 0)
        {
            printf("Dado(s) Invalido(s). Tente novamente!: ");
            do
            {
                car = getchar();

            } while (car != '\n');

            ret = scanf("%lf", &N);
            printf("\n");
        }

    while (N != (int)N)
    {
        printf("A operacao nao admite numeros fracionarios!\n");
        printf("Tente novamente: ");
        ret = scanf("%lf", &N);
        printf("\n");

        while (ret == 0)
        {
            printf("Dado(s) Invalido(s). Tente novamente!: ");
            do
            {
                car = getchar();

            } while (car != '\n');

            ret = scanf("%lf", &N);
            printf("\n");
        }
    }


    while (N < 0 || N > 15)
    {
        printf("A calculadora so admite numeros inteiros no intervalo de 0 ate 15!\n");
        printf("Tente novamente: ");
        ret = scanf("%lf", &N);
        printf("\n");

        while (ret == 0)
        {
            printf("Dado(s) Invalido(s). Tente novamente!: ");
            do
            {
                car = getchar();

            } while (car != '\n');

            ret = scanf("%lf", &N);
            printf("\n");
        }
    }

    fat = 0;
    for (int i = 0; i < N; i++)
    {
        calc = N * (N-(i+1));
        fat = (int)fat + (int)calc;
    }

    if (fat == 0)
    {
        printf("Fatorial = 1");
        printf("\n");
    }
    else
    {
        printf("Fatorial = %d", fat);
        printf("\n");
    }

    return 0;
}
