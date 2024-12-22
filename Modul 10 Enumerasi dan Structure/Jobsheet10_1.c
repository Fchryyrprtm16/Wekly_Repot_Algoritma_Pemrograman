#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame()
{
    int number, guess, attempts = 0;
    char playAgain;

    // Generate a random number between 1 and 20
    srand(time(0));
    number = (rand() % 20) + 1;

    printf("\nSaya telah memilih nomor antara 1 dan 20. Coba tebak!\n");

    do
    {
        printf("\nMasukkan tebakan Anda: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number)
        {
            printf("Nomor saya lebih besar!\n");
        }
        else if (guess > number)
        {
            printf("Nomor saya lebih kecil!\n");
        }
        else
        {
            printf("Selamat, Anda benar!\n");
            printf("Anda membutuhkan %d percobaan untuk menebak nomor tersebut.\n", attempts);
        }
    } while (guess != number);

    printf("\nIngin bermain lagi? (y/n): ");
    scanf(" %c", &playAgain);

    if (playAgain == 'y' || playAgain == 'Y')
    {
        playGame();
    }
    else
    {
        printf("Terima kasih telah bermain!\n");
    }
}

int main()
{
    printf("Selamat datang di permainan Tebak Nomor!\n");
    playGame();
    return 0;
}