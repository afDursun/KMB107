#include <stdio.h>

int main() {
    // Bir tamsayı değişkeni oluşturuyor ve 5 değerini atıyoruz
    int sayi = 5;
    // Tamsayı değeri ekrana yazdırıyoruz
    printf("%d\n", sayi);
    
    // Ondalıklı bir sayı (float) tanımlıyoruz ve 5.45 değerini atıyoruz
    float ondalikli = 5.45;
    // Ondalıklı değeri ekrana yazdırıyoruz
    printf("%f\n", ondalikli);
    
    // İki tamsayı değişkeni oluşturuyoruz
    int sayi1 = 5;
    int sayi2 = 2;
    
    // Tip dönüşümü yaparak 5/2 işlemini ondalıklı olarak hesaplıyoruz
    float sonuc = (float) 5 / 2;
    // Sonucu ekrana yazdırıyoruz
    printf("%f", sonuc);
    
    //Kullanıcıdan bir sayı almak için.
    /*
    int degisken;
    printf("Bir sayı giriniz: ");
    scanf("%d" , &degisken);
    printf("%d", degisken);
    */
    
    // Kullanıcıdan iki tamsayı alıyoruz
    int degisken1;
    int degisken2;
    printf("\n1. Sayıyı Giriniz: ");
    scanf("%d", &degisken1);  // İlk sayıyı alıyoruz
    
    printf("2. Sayıyı Giriniz: ");
    scanf("%d", &degisken2);  // İkinci sayıyı alıyoruz
    
    // İki sayının toplamını hesaplıyoruz
    int toplam = degisken1 + degisken2;
    // Toplamı ekrana yazdırıyoruz
    printf("İki sayının toplamı = %d", toplam);
    
    // Aynı toplamı farklı bir formatla tekrar yazdırıyoruz
    printf("\n%d ile %d sayılarının toplamı = %d\n", degisken1, degisken2, toplam);
    
    // İki değişkeni tek satırda, alt alta yazdırıyoruz
    printf("%d \n %d", degisken1, degisken2);
    
    // Post-increment ve pre-increment işlemlerini gösteriyoruz
    int sayi3 = 5;
    printf("\n");
    // sayi3'ü ekrana yazdır ve sonra değerini 1 arttır (post-increment)
    printf("%d\n", sayi3++);
    // sayi3'ü önce 1 arttır, sonra ekrana yazdır (pre-increment)
    printf("%d", ++sayi3);
    
    return 0;
}
