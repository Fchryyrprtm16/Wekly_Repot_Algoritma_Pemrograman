#include <stdio.h>

int main()
{
    int i, j;

    // Loop untuk setiap baris
    for (i = 1; i <= 5; i++)
    {
        // Loop untuk mencetak bintang pada setiap baris
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        // Pindah ke baris berikutnya
        printf("\n");
    }

    return 0;
}