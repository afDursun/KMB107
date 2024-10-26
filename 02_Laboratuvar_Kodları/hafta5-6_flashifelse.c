#include <stdio.h>

int main() {
    float T, P;
    float feed1, feed2; // Ýki bileþen için ayrý deðiþkenler
    float liquid, vapor;

    // Kullanýcýdan giriþ alma
    printf("Sýcaklýk (°C) girin: ");
    scanf("%f", &T);
    printf("Basýnç (atm) girin: ");
    scanf("%f", &P);
    printf("Bileþen 1'in besleme oranýný girin: ");
    scanf("%f", &feed1);
    printf("Bileþen 2'nin besleme oranýný girin: ");
    scanf("%f", &feed2);

    // Koþul kontrolleri
    if (T < 70 || T > 150) {
        printf("Sýcaklýk uygun deðil, 70-150°C arasýnda olmalý.\n");
    } else if (P < 1 || P > 5) {
        printf("Basýnç uygun deðil, 1-5 atm arasýnda olmalý.\n");
    } else {
        // Denge oranlarý
        float K1 = 1.5; // Bileþen 1 için denge oraný
        float K2 = 2.0; // Bileþen 2 için denge oraný

        // Toplam besleme miktarý
        float total_feed = feed1 + feed2;

        // Buhar fazý oraný hesaplama
        float V = total_feed / (1 + (K1 - 1) * feed1 + (K2 - 1) * feed2);
        liquid = total_feed - V; // Sývý faz
        vapor = V; // Buhar faz

        printf("Sývý faz: %.2f kg, Buhar faz: %.2f kg\n", liquid, vapor);
    }

    return 0;
}

