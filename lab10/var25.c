#include <stdio.h>
#include <stdlib.h>

struct Parallelogram
{
    float a;
    float b;
    float corner;
};

void countFigures(struct Parallelogram *figure, int K, int *k1, int *k2)
{
    *k1 = 0;
    *k2 = 0;

    for (int i = 0; i < K; i++)
    {
        if (figure[i].corner == 90)
        {
            if (figure[i].a == figure[i].b)
            {
                (*k1)++;
            }
            else
            {
                (*k2)++;
            }
        }
    }
}

int main()
{
    int K, k1, k2;

    printf("Введите количество параллелограммов: ");
    scanf("%d", &K);

    struct Parallelogram *figures = malloc(K * sizeof(struct Parallelogram));

    for (int i = 0; i < K; i++)
    {
        printf("Параллелограмм %d-(о)й\n", i + 1);
        printf("введите сторону a = ");
        scanf("%f", &figures[i].a);
        printf("введите сторону b = ");
        scanf("%f", &figures[i].b);
        printf("введите угол между ними = ");
        scanf("%f", &figures[i].corner);
    }

    countFigures(figures, K, &k1, &k2);

    printf("Квадраты: %d\n", k1);
    printf("Прямоугольники: %d\n", k2);

    free(figures);
}