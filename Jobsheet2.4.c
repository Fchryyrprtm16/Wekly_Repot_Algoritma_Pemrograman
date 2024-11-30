#include <stdio.h>

int main()
{
    float panjang = 10.0;
    float lebar = 5.0;
    float luas_persegi_panjang;

    // Rumus luas persegi panjang: panjang * lebar
    luas_persegi_panjang = panjang * lebar;

    // Menampilkan hasil
    printf("Luas Persegi Panjang dengan panjang = %.2f cm dan lebar = %.2f cm adalah: %.2f cm^2\n", panjang, lebar, luas_persegi_panjang);

    return 0;
}