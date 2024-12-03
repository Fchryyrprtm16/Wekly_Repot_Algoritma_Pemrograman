#include <stdio.h>

int main()
{
    int jumlahMahasiswa, i;

    // Meminta input jumlah mahasiswa
    printf("Input banyak mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    // Deklarasi array untuk menampung nama mahasiswa
    char namaMahasiswa[jumlahMahasiswa][50];

    // Meminta input nama mahasiswa
    for (i = 0; i < jumlahMahasiswa; i++)
    {
        printf("Input nama mahasiswa ke-%d: ", i + 1);
        scanf("%s", namaMahasiswa[i]);
    }

    // Menampilkan nama-nama mahasiswa
    printf("\nDaftar nama mahasiswa:\n");
    for (i = 0; i < jumlahMahasiswa; i++)
    {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, namaMahasiswa[i]);
    }

    return 0;
}