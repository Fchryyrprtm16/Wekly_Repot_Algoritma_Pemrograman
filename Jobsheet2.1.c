#include <stdio.h>

int main()
{
    char nama[100];

    // Menampilkan pesan awal
    printf("Hello, siapa nama lengkapmu?\n");

    // Mengambil input nama lengkap dari pengguna
    fgets(nama, sizeof(nama), stdin);

    // Menampilkan pesan sambutan
    printf("Selamat Datang %s dalam Pemrograman C!\n", nama);

    return 0;
}