#include <stdio.h>

int main()
{
    int total_detik, jam, menit, detik;

    // Meminta pengguna untuk memasukkan jumlah detik
    printf("Masukkan jumlah waktu dalam detik: ");
    scanf("%d", &total_detik);

    // Menghitung jam, menit, dan detik
    jam = total_detik / 3600;         // 1 jam = 3600 detik
    total_detik = total_detik % 3600; // Sisa detik setelah dihitung jam
    menit = total_detik / 60;         // 1 menit = 60 detik
    detik = total_detik % 60;         // Sisa detik setelah dihitung menit

    // Menampilkan hasil konversi
    printf("Hasil: %d Jam, %d Menit, %d Detik\n", jam, menit, detik);

    return 0;
}