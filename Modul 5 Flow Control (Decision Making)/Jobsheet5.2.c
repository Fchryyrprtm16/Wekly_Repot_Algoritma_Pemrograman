#include <stdio.h>

int main()
{
    float total_pembelian, diskon, total_bayar;
    int cashback = 0;

    // Meminta input total pembelian
    printf("===== Toserba_Fachry =====\n");
    printf("Masukkan total pembelian: Rp ");
    scanf("%f", &total_pembelian);

    // Ketentuan diskon berdasarkan total pembelian
    if (total_pembelian <= 75000)
    {
        diskon = total_pembelian * 0.05; // Diskon 5%
    }
    else if (total_pembelian > 75000 && total_pembelian <= 125000)
    {
        diskon = total_pembelian * 0.15; // Diskon 15%
    }
    else if (total_pembelian > 125000)
    {
        diskon = total_pembelian * 0.25; // Diskon 25%
        cashback = 5000;                 // Cashback Rp 5.000
    }

    // Menghitung total pembayaran setelah diskon dan cashback
    total_bayar = total_pembelian - diskon - cashback;

    // Output hasil perhitungan
    printf("Total pembelian: Rp %.2f\n", total_pembelian);
    printf("Diskon: Rp %.2f\n", diskon);
    if (cashback > 0)
    {
        printf("Cashback: Rp %d\n", cashback);
    }
    printf("Total yang harus dibayar: Rp %.2f\n", total_bayar);

    return 0;
}
