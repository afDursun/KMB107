#include <stdio.h>

int main() {
    int toplam = 0;
    int sayi = 100; // 1'den 100'e kadar sayılar

    // 1'den 100'e kadar olan sayıların toplamını hesapla
    for (int i = 1; i <= sayi; i++) {
        toplam += i;
    }

    // Ortalamayı hesapla
    float ortalama = (float)toplam / sayi;

    // Sonuçları ekrana yazdır
    printf("1'den %d'e kadar sayıların toplamı: %d\n", sayi, toplam);
    printf("1'den %d'e kadar sayıların ortalaması: %.2f\n", sayi, ortalama);

    return 0;
}

