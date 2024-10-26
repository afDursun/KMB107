#include <stdio.h>

int main() {
    float sicaklik, basinc, a_maddesi, b_maddesi;

    // Kullanýcýdan sýcaklýk, basýnç, A ve B maddelerinin miktarýný al
    printf("Sýcaklýðý girin (°C): ");
    scanf("%f", &sicaklik);
    printf("Basýncý girin (atm): ");
    scanf("%f", &basinc);
    printf("A maddesinin miktarýný girin (kg): ");
    scanf("%f", &a_maddesi);
    printf("B maddesinin miktarýný girin (kg): ");
    scanf("%f", &b_maddesi);

    // Basýnç kontrolü
    if (basinc >= 1 && basinc <= 3) {
        // Sýcaklýk kontrolü
        if (sicaklik >= 50 && sicaklik <= 150) {
            // A maddesi kontrolü
            if (a_maddesi >= 10 && a_maddesi <= 40) {
                // B maddesi kontrolü
                if (b_maddesi >= 5 && b_maddesi <= 25) {
                    // Ürünlerin elde edilmesi için sýcaklýk ve A, B maddesi kontrolleri
                    if (sicaklik <= 100) {
                        if (a_maddesi >= 10 && a_maddesi <= 20 && b_maddesi >= 5 && b_maddesi <= 15) {
                            printf("Ürün X1 elde edilir.\n");
                        } else {
                            printf("Sýcaklýk uygun, ama A ve B maddeleri uygun deðil.\n");
                        }
                    } else {
                        if (a_maddesi >= 21 && a_maddesi <= 40 && b_maddesi >= 10 && b_maddesi <= 25) {
                            printf("Ürün Y1 elde edilir.\n");
                        } else {
                            printf("Sýcaklýk uygun, ama A ve B maddeleri uygun deðil.\n");
                        }
                    }
                } else {
                    printf("B maddesi uygun deðil.\n");
                }
            } else {
                printf("A maddesi uygun deðil.\n");
            }
        } else {
            printf("Sýcaklýk uygun deðil.\n");
        }
    } else {
        printf("Basýnç uygun deðil.\n");
    }

    return 0;
}
