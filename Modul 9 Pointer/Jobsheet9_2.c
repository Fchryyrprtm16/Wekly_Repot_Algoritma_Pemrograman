#include <stdio.h>
#include <string.h>

// Define a structure for Zodiac
struct Zodiac
{
    char name[20];
    int start_day;
    int start_month;
    int end_day;
    int end_month;
};

void determineZodiac(int day, int month)
{
    // Array of Zodiac signs
    struct Zodiac zodiacs[] = {
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITTARIUS", 22, 11, 21, 12}};

    for (int i = 0; i < 12; i++)
    {
        if ((month == zodiacs[i].start_month && day >= zodiacs[i].start_day) ||
            (month == zodiacs[i].end_month && day <= zodiacs[i].end_day))
        {
            printf("Zodiak Anda adalah: %s\n", zodiacs[i].name);
            return;
        }
    }

    printf("Tanggal lahir tidak valid.\n");
}

int main()
{
    int day, month, year;

    printf("Masukkan Tanggal Lahir Anda [dd-mm-yyyy]: ");
    scanf("%d-%d-%d", &day, &month, &year);

    printf("Tanggal Lahir Anda [%02d-%02d-%04d]\n", day, month, year);

    determineZodiac(day, month);

    return 0;
}