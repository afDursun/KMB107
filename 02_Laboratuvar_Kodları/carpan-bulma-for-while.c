#include <stdio.h>

int main() {
    int n, i, j;

    // Kullanıcıdan bir sayı alalım
    printf("Bir sayi girin: ");
    scanf("%d", &n);

    // 1 ile N arasındaki sayılar için döngü
    for (i = 1; i <= n; i++) {
        printf("%d sayisinin carpanları: ", i);

        // çarpanları bulmak için iç içe while döngüsü
        j = 1;
        while (j <= i) {
            if (i % j == 0) {
                printf("%d ", j);  // Eğer j, i'nin çarpanıysa yazdır
            }
            j++;
        }

        printf("\n");
    }
    return 0;
}
