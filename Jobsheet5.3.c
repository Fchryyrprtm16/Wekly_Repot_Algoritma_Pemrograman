#include <stdio.h>
#define PI 3.14159 // Mendefinisikan nilai pi

int main()
{
    int pilihan;
    float luas, radius, sisi, panjang, lebar, tinggi, tinggi_tabung;

    // Menampilkan menu pilihan
    printf("===== Pilih Rumus Luas Permukaan =====\n");
    printf("1. Luas Permukaan Bola\n");
    printf("2. Luas Permukaan Kubus\n");
    printf("3. Luas Permukaan Balok\n");
    printf("4. Luas Permukaan Tabung\n");
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1: // Luas Permukaan Bola
        printf("Masukkan jari-jari bola: ");
        scanf("%f", &radius);
        luas = 4 * PI * radius * radius;
        printf("Luas Permukaan Bola: %.2f\n", luas);
        break;
    case 2: // Luas Permukaan Kubus
        printf("Masukkan panjang sisi kubus: ");
        scanf("%f", &sisi);
        luas = 6 * sisi * sisi;
        printf("Luas Permukaan Kubus: %.2f\n", luas);
        break;
    case 3: // Luas Permukaan Balok
        printf("Masukkan panjang balok: ");
        scanf("%f", &panjang);
        printf("Masukkan lebar balok: ");
        scanf("%f", &lebar);
        printf("Masukkan tinggi balok: ");
        scanf("%f", &tinggi);
        luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
        printf("Luas Permukaan Balok: %.2f\n", luas);
        break;
    case 4: // Luas Permukaan Tabung
        printf("Masukkan jari-jari alas tabung: ");
        scanf("%f", &radius);
        printf("Masukkan tinggi tabung: ");
        scanf("%f", &tinggi_tabung);
        luas = 2 * PI * radius * (radius + tinggi_tabung);
        printf("Luas Permukaan Tabung: %.2f\n", luas);
        break;
    default:
        printf("Pilihan tidak valid. Silakan pilih antara 1 hingga 4.\n");
        break;
    }

    return 0;
}
