#include <stdio.h>

int main()
{
    int durasi;
    float total_biaya;

    // Tarif tetap 1 jam pertama
    float tarif_pertama = 15000;

    // Tarif 50% dari 1 jam pertama untuk jam berikutnya
    float tarif_brikutnya = tarif_pertama * 0.5;

    // Input durasi menonton dalam jam
    printf("Masukan durasi menonton film(jam): ");
    scanf("%d", &durasi);

    // Jika durasi <= 1, hanya dikenakan tarif 1 jam pertama
    if (durasi == 1)
    {
        total_biaya = tarif_pertama;
    }
    // Jika durasi lebih dari 1, hitung tarif 1 jam pertama + tarif berikutnya
    else if (durasi > 1)
    {
        total_biaya = tarif_pertama + (durasi - 1) * tarif_brikutnya;
    }
    // output total biaya
    printf("total biaya yang harus dibayar: Rp %.2f\n", total_biaya);

    return 0;
}