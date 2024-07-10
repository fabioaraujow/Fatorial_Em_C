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

    while (ret == 0 || N != (int)N)
        {
            printf("Dado(s) Invalido(s). Tente novamente!: ");
            do
            {
                car = getchar();

            } while (car != '\n');

            ret = scanf("%lf", &N);
            printf("\n");
        }

    while (N < 0 || N > 15)
    {
        printf("Dado(s) Invalido(s). Tente novamente!: ");
        ret = scanf("%lf", &N);
        printf("\n");

        while (ret == 0 || N != (int)N)
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
