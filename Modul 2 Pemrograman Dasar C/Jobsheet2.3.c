#include <stdio.h>

int main()
{
    float alas = 8.0;
    float tinggi = 5.0;
    float luas_segitiga;

    // Rumus luas segitiga: 0.5 * alas * tinggi
    luas_segitiga = 0.5 * alas * tinggi;

    // Menampilkan hasil
    printf("Luas Segitiga dengan alas = %.2f cm dan tinggi = %.2f cm adalah: %.2f cm^2\n", alas, tinggi, luas_segitiga);

    return 0;
}