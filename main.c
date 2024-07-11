#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    long long int fat, ret;
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

    fat = 1;
    for (int i = N; i > 0; i--)
    {
        fat = fat * i;
    }

    if (fat == 0)
    {
        printf("Fatorial = 1");
        printf("\n");
    }
    else
    {
        printf("Fatorial = %lli", fat);
        printf("\n");
    }

    return 0;
}
