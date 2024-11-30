#include <stdio.h>
#define PHI 3.14159 // konstanta nilai phi

int main()
{
    float diameter = 12.0;
    float radius = diameter / 2.0;
    float volume, luas_permukaan;

    // Rumus Volume Bola
    volume = (4.0 / 3.0) * PHI * (radius * radius * radius);

    // Rumus Luas Permukaan Bola
    luas_permukaan = 4.0 * PHI * (radius * radius);

    // Menampilkan hasil
    printf("Diameter bola: %.2f cm\n", diameter);
    printf("Volume bola: %.2f cm^3\n", volume);
    printf("Luas permukaan bola: %.2f cm^2\n", luas_permukaan);

    return 0;
}