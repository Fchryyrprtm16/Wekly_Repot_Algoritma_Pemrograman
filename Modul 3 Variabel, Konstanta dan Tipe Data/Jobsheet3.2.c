#include <stdio.h>

int main()
{
    // Deklarasi variabel
    float celsius, kelvin, fahrenheit, reamur;

    // Input suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celsius);

    // Menghitung suhu dalam Kelvin
    kelvin = celsius + 273.15;

    // Menghitung suhu dalam Fahrenheit
    fahrenheit = (celsius * 1.8) + 32;

    // Menghitung suhu dalam Reamur
    reamur = celsius * 0.8;

    // Menampilkan hasil konversi
    printf("Input Suhu (Celcius) \t= %.2f C\n", celsius);
    printf("Suhu dalam Kelvin \t= %.2f K\n", kelvin);
    printf("Suhu dalam Fahrenheit \t= %.2f F\n", fahrenheit);
    printf("Suhu dalam Reamur \t= %.2f R\n", reamur);

    return 0;
}