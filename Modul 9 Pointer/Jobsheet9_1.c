#include <stdio.h>

int main() {
    char *str = "BORLAND"; // String yang akan digunakan
    char *ptr = str; // Pointer yang menunjuk ke string

    // Menggunakan loop untuk mencetak setiap baris
    for (int i = 1; i <= 7; i++) {
        // Menggunakan pointer untuk mencetak karakter dari string
        for (int j = 0; j < i; j++) {
            printf("%c", *(ptr + j)); // Mengakses karakter menggunakan pointer
        }
        printf("\n"); // Pindah ke baris berikutnya
    }

    return 0;
}