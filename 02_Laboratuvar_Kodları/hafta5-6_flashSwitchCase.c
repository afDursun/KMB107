#include <stdio.h>

int main() {
    float T, P;
    float feed1, feed2; // �ki bile�en i�in ayr� de�i�kenler
    float liquid, vapor;

    // Kullan�c�dan giri� alma
    printf("S�cakl�k (�C) girin: ");
    scanf("%f", &T);
    printf("Bas�n� (atm) girin: ");
    scanf("%f", &P);
    printf("Bile�en 1'in besleme oran�n� girin: ");
    scanf("%f", &feed1);
    printf("Bile�en 2'nin besleme oran�n� girin: ");
    scanf("%f", &feed2);

    // S�cakl�k kontrol�
    switch ((T < 70) ? 1 : (T > 150) ? 2 : 0) {
        case 1:
            printf("S�cakl�k uygun de�il, 70-150�C aras�nda olmal�.\n");
            return 0; // Uygun de�ilse programdan ��k
        case 2:
            printf("S�cakl�k uygun de�il, 70-150�C aras�nda olmal�.\n");
            return 0; // Uygun de�ilse programdan ��k
        default:
            // Bas�n� kontrol�
            switch ((P < 1) ? 1 : (P > 5) ? 2 : 0) {
                case 1:
                    printf("Bas�n� uygun de�il, 1-5 atm aras�nda olmal�.\n");
                    return 0; // Uygun de�ilse programdan ��k
                case 2:
                    printf("Bas�n� uygun de�il, 1-5 atm aras�nda olmal�.\n");
                    return 0; // Uygun de�ilse programdan ��k
                default:
                    {
					
                    float K1 = 1.5; // Bile�en 1 i�in denge oran�
                    float K2 = 2.0; // Bile�en 2 i�in denge oran�

                    // Toplam besleme miktar�
                    float total_feed = feed1 + feed2;

                    // Buhar faz� oran� hesaplama
                    float V = total_feed / (1 + (K1 - 1) * feed1 + (K2 - 1) * feed2);
                    liquid = total_feed - V; // S�v� faz
                    vapor = V; // Buhar faz

                    printf("S�v� faz: %.2f kg, Buhar faz: %.2f kg\n", liquid, vapor);
                    break;}
            }
            break;
    }

    return 0;
}

