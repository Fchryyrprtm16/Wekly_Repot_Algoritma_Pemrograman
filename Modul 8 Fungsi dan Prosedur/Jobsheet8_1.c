#include <stdio.h>

// Fungsi rekursif untuk melakukan perkalian
int perkalian(int a, int b)
{
    if (b == 0)
    {
        return 0; // Basis rekursi
    }
    else
    {
        return a + perkalian(a, b - 1); // Penjumlahan berulang
    }
}

int main()
{
    int bil1, bil2, hasil;

    // Input dua bilangan bulat positif
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bil1);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bil2);

    // Memanggil fungsi rekursif
    hasil = perkalian(bil1, bil2);

    // Menampilkan hasil perkalian
    printf("Hasil dari %d x %d = %d\n", bil1, bil2, hasil);

    return 0;
}