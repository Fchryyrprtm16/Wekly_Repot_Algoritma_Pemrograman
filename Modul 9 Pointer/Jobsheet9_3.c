#include <stdio.h>

int main() {
    // Bagian A
    int Lesley = 57082;
    int Layla = Lesley; // Layla = Lesley
    int Balmond = Layla + 1; // Balmond = Layla + 1

    // Menampilkan hasil Bagian A
    printf("Bagian A:\n");
    printf("Nilai Layla: %d\n", Layla); // a) Nilai Layla
    printf("Nilai Balmond: %d\n", Balmond); // b) Nilai Balmond

    // Bagian B
    int *LaylaPtr = &Lesley; // Layla = &Lesley
    Balmond = *LaylaPtr + 1; // Balmond = *Layla + 1

    // Menampilkan hasil Bagian B
    printf("\nBagian B:\n");
    printf("Nilai Layla: %d\n", *LaylaPtr); // a) Nilai Layla
    printf("Nilai Balmond: %d\n", Balmond); // b) Nilai Balmond

    return 0;
}