#include <stdio.h>

int main() {
    int sayi;

    // Kullan�c�dan say� alma
    printf("Bir say� girin: ");
    scanf("%d", &sayi);

    // Say� 5'e e�it oldu�u s�rece d�ng�y� devam ettir
    while (sayi == 5) {
        printf("Bu bir sonsuz d�ng�d�r!\n");
        
        // Kullan�c�dan yeni bir say� girmesini iste
        printf("Ba�ka bir say� girin (5 girerseniz d�ng� devam eder): ");
        scanf("%d", &sayi);
    }

    printf("D�ng� sona erdi.\n");
    
    return 0;
}
