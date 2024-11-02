#include <stdio.h>

int main() {
    printf("Carpan Tablosu:\n");

    // Dýþ döngü: 1'den 10'a kadar sayýlar
    for (int i = 1; i <= 10; i++) {
        // Ýç döngü: 1'den 10'a kadar sayýlar
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Her sayýnýn çarpanlarýndan sonra bir boþluk
    }

    return 0;
}

