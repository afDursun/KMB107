#include <stdio.h>

int main() {
    int sayi;

    // Kullan�c�dan say� alma
    printf("Bir say� girin: ");
    scanf("%d", &sayi);

    int i = 1; // D�� d�ng� i�in saya�

    // D�� d�ng�: 1'den girilen say�ya kadar
    while (i <= sayi) {
        printf("%d: ", i); // Mevcut say�y� yazd�r

        int j = 1; // �� d�ng� i�in saya�

        // �� d�ng�: 1'den i'ye kadar
        while (j <= i) {
            printf("%d ", j); // j'yi yazd�r
            j++; // j'yi art�r
        }

        printf("\n"); // Her sat�rdan sonra yeni sat�ra ge�
        i++; // i'yi art�r
    }

    return 0;
}

