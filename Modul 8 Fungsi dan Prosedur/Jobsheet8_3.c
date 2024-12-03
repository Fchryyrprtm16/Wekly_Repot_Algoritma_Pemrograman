#include <stdio.h>
#define PI 3.14159

// Fungsi untuk menghitung luas lingkaran
float luas(float radius)
{
    return PI * radius * radius;
}

// Fungsi untuk menghitung keliling lingkaran
float keliling(float radius)
{
    return 2 * PI * radius;
}

int main()
{
    float radius;
    int pilihan;

    do
    {
        // Menu untuk memilih perhitungan
        printf("\n--- Program Lingkaran ---\n");
        printf("1) Hitung Luas Lingkaran\n");
        printf("2) Hitung Keliling Lingkaran\n");
        printf("3) Exit\n");
        printf("Pilih opsi (1-3): ");
        scanf("%d", &pilihan);

        if (pilihan == 1 || pilihan == 2)
        {
            // Meminta input jari-jari
            printf("Masukkan jari-jari lingkaran: ");
            scanf("%f", &radius);
        }

        switch (pilihan)
        {
        case 1:
            printf("Luas lingkaran dengan jari-jari %.2f adalah: %.2f\n", radius, luas(radius));
            break;
        case 2:
            printf("Keliling lingkaran dengan jari-jari %.2f adalah: %.2f\n", radius, keliling(radius));
            break;
        case 3:
            printf("Terima kasih telah menggunakan program ini.\n");
            break;
        default:
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 3);

    return 0;
}