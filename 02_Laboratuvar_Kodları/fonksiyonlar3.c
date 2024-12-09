#include <stdio.h>

float sinav1 = 0, sinav2 = 0, sinav3 = 0;
float ortalama = 0;
float minNot = 100, maxNot = 0;

void notGir(float s1, float s2, float s3);
void ortalamaHesapla();
void minMaxBul();
void gectiMi();

int main() {
    notGir(78.5, 88.0, 62.5);
    ortalamaHesapla();
    minMaxBul();
    gectiMi();
    return 0;
}

void notGir(float s1, float s2, float s3) {
    sinav1 = s1;
    sinav2 = s2;
    sinav3 = s3;
    printf("Notlar girildi: %.2f, %.2f, %.2f\n", sinav1, sinav2, sinav3);
}

void ortalamaHesapla() {
    ortalama = (sinav1*0.4 + sinav2*0.2 + sinav3*0.4);
    printf("Ortalama hesaplandı: %.2f\n", ortalama);
}

void minMaxBul() {
    if (sinav1 < minNot) minNot = sinav1;
    if (sinav2 < minNot) minNot = sinav2;
    if (sinav3 < minNot) minNot = sinav3;

    if (sinav1 > maxNot) maxNot = sinav1;
    if (sinav2 > maxNot) maxNot = sinav2;
    if (sinav3 > maxNot) maxNot = sinav3;

    printf("Minimum not: %.2f\n", minNot);
    printf("Maksimum not: %.2f\n", maxNot);
}

void gectiMi() {
    if (ortalama >= 50.0) {
        printf("Öğrenci geçti! (Ortalama: %.2f)\n", ortalama);
    } else {
        printf("Öğrenci kaldı! (Ortalama: %.2f)\n", ortalama);
    }
}
