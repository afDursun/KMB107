#include <stdio.h>

int main() {
    int sayi;

    // Kullanýcýdan sayý alma
    printf("Bir sayý girin: ");
    scanf("%d", &sayi);

    int i = 1; // Dýþ döngü için sayaç

    // Dýþ döngü: 1'den girilen sayýya kadar
    while (i <= sayi) {
        printf("%d: ", i); // Mevcut sayýyý yazdýr

        int j = 1; // Ýç döngü için sayaç

        // Ýç döngü: 1'den i'ye kadar
        while (j <= i) {
            printf("%d ", j); // j'yi yazdýr
            j++; // j'yi artýr
        }

        printf("\n"); // Her satýrdan sonra yeni satýra geç
        i++; // i'yi artýr
    }

    return 0;
}

