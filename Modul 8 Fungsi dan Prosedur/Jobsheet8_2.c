#include <stdio.h>

// Fungsi untuk operasi aritmetika
float penjumlahan(float a, float b)
{
    return a + b;
}

float pengurangan(float a, float b)
{
    return a - b;
}

float perkalian(float a, float b)
{
    return a * b;
}

float pembagian(float a, float b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        return 0;
    }
}

int main()
{
    float bil1, bil2;
    int pilihan;

    do
    {
        // Menu operasi aritmetika
        printf("\n--- Kalkulator Aritmetika ---\n");
        printf("1) Penjumlahan\n");
        printf("2) Pengurangan\n");
        printf("3) Perkalian\n");
        printf("4) Pembagian\n");
        printf("5) Exit\n");
        printf("Pilih operasi (1-5): ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4)
        {
            // Input bilangan
            printf("Masukkan bilangan pertama: ");
            scanf("%f", &bil1);
            printf("Masukkan bilangan kedua: ");
            scanf("%f", &bil2);
        }

        // Melakukan operasi berdasarkan pilihan
        switch (pilihan)
        {
        case 1:
            printf("Hasil penjumlahan: %.2f\n", penjumlahan(bil1, bil2));
            break;
        case 2:
            printf("Hasil pengurangan: %.2f\n", pengurangan(bil1, bil2));
            break;
        case 3:
            printf("Hasil perkalian: %.2f\n", perkalian(bil1, bil2));
            break;
        case 4:
            printf("Hasil pembagian: %.2f\n", pembagian(bil1, bil2));
            break;
        case 5:
            printf("Terima kasih telah menggunakan program ini.\n");
            break;
        default:
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 5);

    return 0;
}