#include <stdio.h>

int main() {
    float sicaklik, basinc, a_maddesi, b_maddesi;

    // Kullan�c�dan s�cakl�k, bas�n�, A ve B maddelerinin miktar�n� al
    printf("S�cakl��� girin (�C): ");
    scanf("%f", &sicaklik);
    printf("Bas�nc� girin (atm): ");
    scanf("%f", &basinc);
    printf("A maddesinin miktar�n� girin (kg): ");
    scanf("%f", &a_maddesi);
    printf("B maddesinin miktar�n� girin (kg): ");
    scanf("%f", &b_maddesi);

    // Bas�n� kontrol�
    if (basinc >= 1 && basinc <= 3) {
        // S�cakl�k kontrol�
        if (sicaklik >= 50 && sicaklik <= 150) {
            // A maddesi kontrol�
            if (a_maddesi >= 10 && a_maddesi <= 40) {
                // B maddesi kontrol�
                if (b_maddesi >= 5 && b_maddesi <= 25) {
                    // �r�nlerin elde edilmesi i�in s�cakl�k ve A, B maddesi kontrolleri
                    if (sicaklik <= 100) {
                        if (a_maddesi >= 10 && a_maddesi <= 20 && b_maddesi >= 5 && b_maddesi <= 15) {
                            printf("�r�n X1 elde edilir.\n");
                        } else {
                            printf("S�cakl�k uygun, ama A ve B maddeleri uygun de�il.\n");
                        }
                    } else {
                        if (a_maddesi >= 21 && a_maddesi <= 40 && b_maddesi >= 10 && b_maddesi <= 25) {
                            printf("�r�n Y1 elde edilir.\n");
                        } else {
                            printf("S�cakl�k uygun, ama A ve B maddeleri uygun de�il.\n");
                        }
                    }
                } else {
                    printf("B maddesi uygun de�il.\n");
                }
            } else {
                printf("A maddesi uygun de�il.\n");
            }
        } else {
            printf("S�cakl�k uygun de�il.\n");
        }
    } else {
        printf("Bas�n� uygun de�il.\n");
    }

    return 0;
}
