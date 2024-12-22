#include <stdio.h>
#include <string.h>

#define MAX_MAHASISWA 100

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    char npm[15];
    char nama[50];
    char tgl_lahir[15];
    char alamat[100];
    char hp[15];
};

int main() {
    struct Mahasiswa mahasiswa[MAX_MAHASISWA];
    int count = 0;
    char choice;

    do {
        // Memasukkan data mahasiswa
        printf("Masukkan NPM: ");
        scanf("%s", mahasiswa[count].npm);
        printf("Masukkan Nama: ");
        scanf(" %[^\n]", mahasiswa[count].nama); // Membaca string dengan spasi
        printf("Masukkan Tanggal Lahir (dd-mm-yyyy): ");
        scanf("%s", mahasiswa[count].tgl_lahir);
        printf("Masukkan Alamat: ");
        scanf(" %[^\n]", mahasiswa[count].alamat);
        printf("Masukkan HP: ");
        scanf("%s", mahasiswa[count].hp);

        count++;

        // Menanyakan apakah ingin memasukkan data lagi
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &choice);
    } while (choice == 'y' && count < MAX_MAHASISWA);

    // Menampilkan data mahasiswa
    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < count; i++) {
        printf("NPM: %s\n", mahasiswa[i].npm);
        printf("Nama: %s\n", mahasiswa[i].nama);
        printf("Tanggal Lahir: %s\n", mahasiswa[i].tgl_lahir);
        printf("Alamat: %s\n", mahasiswa[i].alamat);
        printf("HP: %s\n", mahasiswa[i].hp);
        printf("\n");
    }

    return 0;
}