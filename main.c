#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, fat, calc, ret;
    char car;

    printf("Insira o valor para o calculo: ");
    ret = scanf("%d", &N);
    printf("\n");

    while (ret == 0)
        {
            printf("Dado(s) Invalido(s). Tente novamente!: ");
            do
            {
                car = getchar();

            }while (car != '\n');

            ret = scanf("%d", &N);
        }

    while (N <0 || N > 15)
    {
        printf("A calculadora so admite numeros inteiros no intervalo de 0 ate 15!\n");
        printf("Tente novamente: ");
        ret = scanf("%d", &N);
    }

    fat = 0;
    for (int i = 0; i < N; i++)
    {
        calc = N * (N-(i+1));
        fat = fat + calc;
    }
    printf("Fatorial = %d\n", fat);

    return 0;
}
