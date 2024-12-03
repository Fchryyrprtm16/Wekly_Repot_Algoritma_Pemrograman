#include <stdio.h>

int main()
{
    int pilihan;
    float saldo = 175000.0; // Saldo awal sesuai kasus
    float jumlah;

    // Informasi rekening Hattori
    printf("No Rek     : 0123\n");
    printf("Nama Akun  : Hattori\n");
    printf("Saldo ATM  : Rp %.2f\n\n", saldo);

    do
    {
        // Menampilkan menu ATM
        printf("\n--- ATM ---\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            // Menampilkan saldo
            printf("Saldo Anda saat ini: Rp %.2f\n", saldo);
            break;

        case 2:
            // Setoran
            printf("Masukkan jumlah setoran: Rp ");
            scanf("%f", &jumlah);
            if (jumlah > 0)
            {
                saldo += jumlah;
                printf("Setoran berhasil. Saldo Anda sekarang: Rp %.2f\n", saldo);
            }
            else
            {
                printf("Jumlah setoran harus lebih dari 0.\n");
            }
            break;

        case 3:
            // Penarikan Tunai
            printf("Masukkan jumlah penarikan: Rp ");
            scanf("%f", &jumlah);
            if (jumlah > 0 && saldo - jumlah >= 50000)
            {
                saldo -= jumlah;
                printf("Penarikan berhasil. Saldo Anda sekarang: Rp %.2f\n", saldo);
            }
            else if (saldo - jumlah < 50000)
            {
                printf("Saldo tidak mencukupi. Minimal saldo yang harus disisakan adalah Rp 50.000.\n");
            }
            else
            {
                printf("Jumlah penarikan harus lebih dari 0.\n");
            }
            break;

        case 4:
            // Keluar dari program
            printf("Terima kasih telah menggunakan layanan kami.\n");
            break;

        default:
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
            break;
        }
    } while (pilihan != 4);

    return 0;
}