#include <stdio.h>

int main()
{
    // Deklarasi variabel
    int i;

    // Menampilkan bilangan genap
    printf("Deret bilangan genap dari 0 hingga 50:\n");
    for (i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Menampilkan bilangan ganjil
    printf("Deret bilangan ganjil dari 0 hingga 50:\n");
    for (i = 0; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}