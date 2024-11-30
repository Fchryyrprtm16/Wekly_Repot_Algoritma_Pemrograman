#include <stdio.h>

int main()
{
    // Deklarasi variabel
    float nilai_presensi = 85.0;
    float nilai_praktek = 65.0;
    float nilai_uts = 80.0;
    float nilai_uas = 75.0;
    float nilai_akhir;

    // Bobot nilai
    float bobot_presensi = 0.10;
    float bobot_praktek = 0.20;
    float bobot_uts = 0.30;
    float bobot_uas = 0.40;

    // Menghitung nilai akhir
    nilai_akhir = (nilai_presensi * bobot_presensi) +
                  (nilai_praktek * bobot_praktek) +
                  (nilai_uts * bobot_uts) +
                  (nilai_uas * bobot_uas);

    // Output hasil perhitungan
    printf("Nilai akhir dari praktikum C adalah: %.2f\n", nilai_akhir);

    return 0;
}