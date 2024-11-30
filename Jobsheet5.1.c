#include <stdio.h>

int main()
{
    int pilihan;
    float bil1, bil2, hasil;
    int hasil_bagi;

    // Menu utama kalkulator
    printf("===== Kalkulator Sederhana =====\n");
    printf("Pilih operasi yang diinginkan:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Hasil Bagi (Bilangan Bulat)\n");
    printf("Masukkan pilihan (1-5): ");
    scanf("%d", &pilihan);

    // Meminta inputan dua buah bilangan
    printf("Masukkan bilangan pertama: ");
    scanf("%f", &bil1);
    printf("Masukkan bilangan kedua: ");
    scanf("%f", &bil2);

    // Melakukan operasi sesuai dengan pilihan
    switch (pilihan)
    {
    case 1:
        hasil = bil1 + bil2;
        printf("Hasil Penjumlahan: %.2f + %.2f = %.2f\n", bil1, bil2, hasil);
        break;
    case 2:
        hasil = bil1 - bil2;
        printf("Hasil Pengurangan: %.2f - %.2f = %.2f\n", bil1, bil2, hasil);
        break;
    case 3:
        hasil = bil1 * bil2;
        printf("Hasil Perkalian: %.2f * %.2f = %.2f\n", bil1, bil2, hasil);
        break;
    case 4:
        if (bil2 != 0)
        {
            hasil = bil1 / bil2;
            printf("Hasil Pembagian: %.2f / %.2f = %.2f\n", bil1, bil2, hasil);
        }
        else
        {
            printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        }
        break;
    case 5:
        if ((int)bil2 != 0)
        {
            hasil_bagi = (int)bil1 / (int)bil2;
            printf("Hasil Bagi (Bilangan Bulat): %d / %d = %d\n", (int)bil1, (int)bil2, hasil_bagi);
        }
        else
        {
            printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        }
        break;
    default:
        printf("Pilihan tidak valid. Silakan pilih antara 1 hingga 5.\n");
        break;
    }

    return 0;
}
