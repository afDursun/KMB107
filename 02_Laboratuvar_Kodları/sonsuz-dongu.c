#include <stdio.h>

int main() {
    int sayi;

    // Kullanýcýdan sayý alma
    printf("Bir sayý girin: ");
    scanf("%d", &sayi);

    // Sayý 5'e eþit olduðu sürece döngüyü devam ettir
    while (sayi == 5) {
        printf("Bu bir sonsuz döngüdür!\n");
        
        // Kullanýcýdan yeni bir sayý girmesini iste
        printf("Baþka bir sayý girin (5 girerseniz döngü devam eder): ");
        scanf("%d", &sayi);
    }

    printf("Döngü sona erdi.\n");
    
    return 0;
}
