#include <stdio.h>

int main()
{
    char nama_pembeli[50];
    char nama_barang[50];
    float harga_satuan;
    int jumlah;
    float harga_total;

    // Input nama pembeli
    printf("Masukkan nama pembeli: ");
    fgets(nama_pembeli, sizeof(nama_pembeli), stdin);

    // Input nama barang
    printf("Masukkan nama barang: ");
    fgets(nama_barang, sizeof(nama_barang), stdin);

    // Input harga barang satuan
    printf("Masukkan harga barang satuan: ");
    scanf("%f", &harga_satuan);

    // Input jumlah barang yang dibeli
    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlah);

    // Menghitung harga total
    harga_total = harga_satuan * jumlah;

    // Output hasil perhitungan
    printf("\n===== Struk Pembelian =====\n");
    printf("Nama Pembeli: %s", nama_pembeli);
    printf("Nama Barang : %s", nama_barang);
    printf("Harga Satuan: Rp %.2f\n", harga_satuan);
    printf("Jumlah      : %d\n", jumlah);
    printf("Harga Total : Rp %.2f\n", harga_total);
    printf("===========================\n");

    return 0;
}