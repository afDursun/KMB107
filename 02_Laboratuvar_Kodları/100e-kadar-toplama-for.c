#include <stdio.h>

int main() {
    int toplam = 0;
    int sayi = 100; // 1'den 100'e kadar say�lar

    // 1'den 100'e kadar olan say�lar�n toplam�n� hesapla
    for (int i = 1; i <= sayi; i++) {
        toplam += i;
    }

    // Ortalamay� hesapla
    float ortalama = (float)toplam / sayi;

    // Sonu�lar� ekrana yazd�r
    printf("1'den %d'e kadar say�lar�n toplam�: %d\n", sayi, toplam);
    printf("1'den %d'e kadar say�lar�n ortalamas�: %.2f\n", sayi, ortalama);

    return 0;
}

