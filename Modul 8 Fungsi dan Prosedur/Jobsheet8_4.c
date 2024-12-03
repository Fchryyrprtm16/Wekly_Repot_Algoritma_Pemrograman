#include <stdio.h>

// Fungsi untuk menghitung potongan diskon
float potong(float totalBelanja)
{
    if (totalBelanja > 3000000)
    {
        return totalBelanja * 0.35; // Diskon 35%
    }
    else if (totalBelanja > 1000000)
    {
        return totalBelanja * 0.20; // Diskon 20%
    }
    else
    {
        return 0; // Tidak ada diskon
    }
}

int main()
{
    float totalBelanja, diskon, totalBayar;

    // Program Hitung Potongan
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.)   : ");
    scanf("%f", &totalBelanja);

    // Menghitung besar diskon
    diskon = potong(totalBelanja);

    // Menghitung total yang harus dibayarkan
    totalBayar = totalBelanja - diskon;

    // Menampilkan hasil
    printf("Besar Diskon            : Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan : Rp. %.2f\n", totalBayar);

    return 0;
}