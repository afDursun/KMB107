#include <stdio.h>

int main() {
    int i = 1;          // Baþlangýç deðeri
    int toplam = 0;    // Toplam deðiþkeni
    int sayi = 100;    // Son sayý

    // 1'den 100'e kadar olan sayýlarýn toplamýný hesapla
    while (i <= sayi) {
        toplam += i;   // i deðerini toplamýna ekle
        i++;           // i'yi 1 artýr
    }

    // Ortalamayý hesapla
    float ortalama = (float)toplam / sayi;

    // Sonuçlarý ekrana yazdýr
    printf("1'den %d'e kadar sayýlarýn toplamý: %d\n", sayi, toplam);
    printf("1'den %d'e kadar sayýlarýn ortalamasý: %.2f\n", sayi, ortalama);

    return 0;
}
