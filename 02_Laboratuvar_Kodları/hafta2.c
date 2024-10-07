#include <stdio.h>

int main() {

    /*
        Yanlış değişken isimlendirmeleri

        double double;
        double int;

        int türkçe_karakter;
        int sayı;

        double 9sayi;
        int 4degisken

        float sayi*1;
        float sayi.3
        dobule sayi?2

    */

    char karakter = 'A';
    //printf("%c", karakter);

	int sayi1;
	int sayi2;
	int toplam;
	
	sayi1 = 4;
	sayi2 = 15;
	
	toplam = sayi1 + sayi2;
	//printf("%d", toplam);
	
	int fark;
	
	fark = sayi2 - sayi1; 
	//printf("%d", fark);
	
	int carpim = sayi1 * sayi2;
	//printf("%d", carpim);
	
    
	double bolum = sayi2 / sayi1;
	//printf("%f", bolum);
	
	int kalan = sayi2 % sayi1;
	printf("%d", kalan);
	
	
	return 0;
}