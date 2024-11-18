#include <stdio.h>

int main() {
    float araSinav1, araSinav2, araSinav3, finalSinavi;
    float araSinavOrtalamasi, donemSonuNotu;

    // Kullanıcıdan notları al
    printf("1. Ara sınav notunu girin: ");
    scanf("%f", &araSinav1);
    printf("2. Ara sınav notunu girin: ");
    scanf("%f", &araSinav2);
    printf("3. Ara sınav notunu girin: ");
    scanf("%f", &araSinav3);
    printf("Final sınavı notunu girin: ");
    scanf("%f", &finalSinavi);

    // En düşük notu bul ve değerlendirme dışı bırak
    if (araSinav1 <= araSinav2 && araSinav1 <= araSinav3) {
        araSinavOrtalamasi = (araSinav2 + araSinav3) / 2;
    } else if (araSinav2 <= araSinav1 && araSinav2 <= araSinav3) {
        araSinavOrtalamasi = (araSinav1 + araSinav3) / 2;
    } else {
        araSinavOrtalamasi = (araSinav1 + araSinav2) / 2;
    }

    // Dönem sonu notunu hesapla
    donemSonuNotu = (araSinavOrtalamasi * 0.4) + (finalSinavi * 0.6);

    // Sonucu ekrana yazdır
    printf("Dönem sonu notunuz: %f\n", donemSonuNotu);

    return 0;
}
