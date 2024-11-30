#include <stdio.h>

int main()
{
    // Nilai tukar 1 Dollar ke Rupiah
    float rupiah_to_dollar_rate = 14250.0;
    // Jumlah Rupiah yang akan ditukar
    float rupiah_amount = 2500000.0;
    // Variabel untuk menyimpan jumlah Dollar
    float dollar_amount;

    // Menghitung jumlah Dollar
    dollar_amount = rupiah_amount / rupiah_to_dollar_rate;

    // Menampilkan hasil
    printf("Jumlah Dollar yang harus diberikan: $%.2f\n", dollar_amount);

    return 0;
}