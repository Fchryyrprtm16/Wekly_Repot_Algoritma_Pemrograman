#include <stdio.h>

int main()
{
    float nilai[20];
    float total = 0, rata_rata;
    int i;

    printf("Masukan nilai dari 20 mahasiswa:\n");
    for (i = 0; i < 20; i++)
    {
        printf("Nilai mahasiswa ke-%d: ",i + 1);
        scanf("%f", &nilai[i]);
        total += nilai[i];
    }

    rata_rata = total / 20;
    printf("\nRata-rata nilai dari 20 mahasiswa adalah: %.2f\n", rata_rata);

    return 0;
}