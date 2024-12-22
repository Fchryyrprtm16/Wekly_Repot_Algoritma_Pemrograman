#include <stdio.h>
#include <stdlib.h>

#define MAX_MAHASISWA 100 // Maksimum jumlah mahasiswa
#define MAX_LENGTH 100 // Panjang maksimum untuk nama, jurusan, dan program studi

// Struktur untuk menyimpan biodata mahasiswa
struct Mahasiswa {
    char nama[MAX_LENGTH];
    char nim[MAX_LENGTH];
    char jurusan[MAX_LENGTH];
    char program_studi[MAX_LENGTH];
};

int main() {
    struct Mahasiswa mahasiswa[MAX_MAHASISWA];
    int jumlah_mahasiswa, i;

    // Meminta jumlah mahasiswa yang ingin diinput
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah_mahasiswa);
    getchar(); // Menghapus newline setelah input jumlah mahasiswa

    // Memastikan jumlah mahasiswa tidak melebihi batas maksimum
    if (jumlah_mahasiswa > MAX_MAHASISWA) {
        printf("Jumlah mahasiswa tidak boleh lebih dari %d.\n", MAX_MAHASISWA);
        return 1;
    }

    // Menginput data mahasiswa
    for (i = 0; i < jumlah_mahasiswa; i++) {
        printf("Masukkan data mahasiswa ke-%d\n", i + 1);
        printf("Nama: ");
        fgets(mahasiswa[i].nama, sizeof(mahasiswa[i].nama), stdin);
        mahasiswa[i].nama[strcspn(mahasiswa[i].nama, "\n")] = 0; // Menghapus newline

        printf("NIM: ");
        fgets(mahasiswa[i].nim, sizeof(mahasiswa[i].nim), stdin);
        mahasiswa[i].nim[strcspn(mahasiswa[i].nim, "\n")] = 0; // Menghapus newline

        printf("Jurusan: ");
        fgets(mahasiswa[i].jurusan, sizeof(mahasiswa[i].jurusan), stdin);
        mahasiswa[i].jurusan[strcspn(mahasiswa[i].jurusan, "\n")] = 0; // Menghapus newline

        printf("Program Studi: ");
        fgets(mahasiswa[i].program_studi, sizeof(mahasiswa[i].program_studi), stdin);
        mahasiswa[i].program_studi[strcspn(mahasiswa[i].program_studi, "\n")] = 0; // Menghapus newline

        printf("\n");
    }

    // Menyimpan data ke dalam file
    FILE *file = fopen("datamahasiswa.txt", "w");
    if (file == NULL) {
        printf("Error: Tidak dapat membuka file.\n");
        return 1;
    }

    // Menulis data mahasiswa ke dalam file
    for (i = 0; i < jumlah_mahasiswa; i++) {
        fprintf(file, "Mahasiswa ke-%d:\n", i + 1);
        fprintf(file, "Nama: %s\n", mahasiswa[i].nama);
        fprintf(file, "NIM: %s\n", mahasiswa[i].nim);
        fprintf(file, "Jurusan: %s\n", mahasiswa[i].jurusan);
        fprintf(file, "Program Studi: %s\n\n", mahasiswa[i].program_studi);
    }

    fclose(file); // Menutup file
    printf("Data mahasiswa telah disimpan ke dalam file datamahasiswa.txt\n");

    return 0;
}