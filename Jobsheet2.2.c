#include <stdio.h>

int main()
{
    char nama[100], nim[20], prodi[50], fakultas[50];
    float nilai_praktikum, nilai_uts, nilai_uas, nilai_akhir;

    // Meminta input dari pengguna
    printf("Masukkan Nama: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan NIM: ");
    fgets(nim, sizeof(nim), stdin);

    printf("Masukkan Program Studi (Prodi): ");
    fgets(prodi, sizeof(prodi), stdin);

    printf("Masukkan Fakultas: ");
    fgets(fakultas, sizeof(fakultas), stdin);

    printf("Masukkan Nilai Praktikum: ");
    scanf("%f", &nilai_praktikum);

    printf("Masukkan Nilai UTS: ");
    scanf("%f", &nilai_uts);

    printf("Masukkan Nilai UAS: ");
    scanf("%f", &nilai_uas);

    // Menghitung nilai akhir
    nilai_akhir = (0.3 * nilai_praktikum) + (0.3 * nilai_uts) + (0.4 * nilai_uas);

    // Menampilkan output
    printf("Nama             : %s", nama);
    printf("NIM              : %s", nim);
    printf("Prodi            : %s", prodi);
    printf("Fakultas         : %s", fakultas);
    printf("Nilai Praktikum  : %.2f\n", nilai_praktikum);
    printf("Nilai UTS        : %.2f\n", nilai_uts);
    printf("Nilai UAS        : %.2f\n", nilai_uas);
    printf("Nilai Akhir      : %.2f\n", nilai_akhir);

    return 0;
}