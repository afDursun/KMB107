#include <stdio.h>

int main() {
    char grade;

    printf("Notunuzu girin (A, B, C, D, F): ");
    scanf(" %c", &grade); // Önce boþluk býrak, aksi halde boþluk karakterini okur.

    switch (grade) {
        case 'A':
            printf("Mükemmel!\n");
            break; // 'A' için iþlem tamamlanýr, diðer case'lere geçilmez.
        case 'B':
            printf("Çok iyi!\n");
            break; // 'B' için iþlem tamamlanýr.
        case 'C':
            printf("Ýyi!\n");
            break; // 'C' için iþlem tamamlanýr.
        case 'D':
            printf("Geçtiniz!\n");
            break; // 'D' için iþlem tamamlanýr.
        case 'F':
            printf("Kaldýnýz!\n");
            break; // 'F' için iþlem tamamlanýr.
        default:
            printf("Geçersiz not!\n");
            break; // Geçersiz not durumu için iþlem tamamlanýr.
    }

    return 0;
}

