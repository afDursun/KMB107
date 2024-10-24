#include <stdio.h>

int main()
{
    /*
    if (ifade) işlem-satırı;
    else if (ifade) işlem-satırı;
    else if (ifade) işlem-satırı;
    else işlem-satırı;

    if (ifade) {
    	işlem-satırı;
        .
    	.
    }	

    if (ifade) {
    	işlem-satırı;
        .
    	.
    }	
    else if (ifade) {
    	işlem-satırı;
        .
    	.
    }	
    else if (ifade) {
    	işlem-satırı;
        .
    	.
    }	
    else{
    	işlem-satırı;
        .
    	.
    }	
    */
    
    int sayi = 21;

    if (sayi == 21) printf("sayı değişken değeri 21 sayısına eşittir!");
    
    sayi = 35;
      
    if (sayi == 21) printf("\nsayı değişken değeri 21 sayısına eşittir!");
      
    if(sayi > 0){
        if(sayi < 100){
            printf("\nSayı 0-100 arasındadır");
        }
        else{
            printf("\nSayı 100den büyüktür.");
        }
    }
    else printf("\nSayı negatiftir.");
    
    if ((sayi>0) && (sayi<100)) {
	  printf("\nsayi değişken değeri pozitif bir sayıdır!\n");
      printf("\nsayi değişken değeri 0-100 arasında bir sayıdır!");
    }
    else if(sayi > 100){
        printf("\nsayi değişkeni 100'den büyüktür.");
    }
    else{
        printf("\nsayi değişkeni negatiftir.");
    }
    
    int kilo;
    float boy;
    float ideal_kilo;
    printf("\nKilonuzu giriniz: ");
    scanf("%d", &kilo);
    
    printf("\nBoyunuzu giriniz: ");
    scanf("%f", &boy);
    
    ideal_kilo = kilo / (boy*boy);
    
    if(ideal_kilo<18) printf("\nZayıfsın");
    if(ideal_kilo>18 && ideal_kilo<25) printf("\nNormalsin");
    if(ideal_kilo > 25) printf("\nBirazcık dikkat etmelisin");
    
    printf("\nVKI: %f", ideal_kilo );

    return 0;
}