#include <stdio.h>

int main() {
    char grade;

    printf("Notunuzu girin (A, B, C, D, F): ");
    scanf(" %c", &grade); // �nce bo�luk b�rak, aksi halde bo�luk karakterini okur.

    switch (grade) {
        case 'A':
            printf("M�kemmel!\n");
            break; // 'A' i�in i�lem tamamlan�r, di�er case'lere ge�ilmez.
        case 'B':
            printf("�ok iyi!\n");
            break; // 'B' i�in i�lem tamamlan�r.
        case 'C':
            printf("�yi!\n");
            break; // 'C' i�in i�lem tamamlan�r.
        case 'D':
            printf("Ge�tiniz!\n");
            break; // 'D' i�in i�lem tamamlan�r.
        case 'F':
            printf("Kald�n�z!\n");
            break; // 'F' i�in i�lem tamamlan�r.
        default:
            printf("Ge�ersiz not!\n");
            break; // Ge�ersiz not durumu i�in i�lem tamamlan�r.
    }

    return 0;
}

