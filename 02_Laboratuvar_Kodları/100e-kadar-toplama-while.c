#include <stdio.h>

int main() {
    int i = 1;          // Ba�lang�� de�eri
    int toplam = 0;    // Toplam de�i�keni
    int sayi = 100;    // Son say�

    // 1'den 100'e kadar olan say�lar�n toplam�n� hesapla
    while (i <= sayi) {
        toplam += i;   // i de�erini toplam�na ekle
        i++;           // i'yi 1 art�r
    }

    // Ortalamay� hesapla
    float ortalama = (float)toplam / sayi;

    // Sonu�lar� ekrana yazd�r
    printf("1'den %d'e kadar say�lar�n toplam�: %d\n", sayi, toplam);
    printf("1'den %d'e kadar say�lar�n ortalamas�: %.2f\n", sayi, ortalama);

    return 0;
}
