#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100 // Panjang maksimum kalimat

int main() {
    char kalimat[MAX_LENGTH]; // Array untuk menyimpan kalimat
    char terbalik[MAX_LENGTH]; // Array untuk menyimpan kalimat terbalik
    int length, i;

    // Meminta pengguna untuk memasukkan kalimat
    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin); // Menggunakan fgets untuk membaca kalimat dengan spasi

    // Menghapus newline yang mungkin ada di akhir kalimat
    length = strlen(kalimat);
    if (kalimat[length - 1] == '\n') {
        kalimat[length - 1] = '\0';
    }

    // Membalikkan kalimat
    length = strlen(kalimat);
    for (i = 0; i < length; i++) {
        terbalik[i] = kalimat[length - 1 - i]; // Mengisi array terbalik
    }
    terbalik[length] = '\0'; // Menambahkan null terminator di akhir string terbalik

    // Menampilkan kalimat terbalik
    printf("Kebalikannya: %s\n", terbalik);

    return 0;
}