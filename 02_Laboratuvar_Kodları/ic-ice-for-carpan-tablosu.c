#include <stdio.h>

int main() {
    printf("Carpan Tablosu:\n");

    // D�� d�ng�: 1'den 10'a kadar say�lar
    for (int i = 1; i <= 10; i++) {
        // �� d�ng�: 1'den 10'a kadar say�lar
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Her say�n�n �arpanlar�ndan sonra bir bo�luk
    }

    return 0;
}

