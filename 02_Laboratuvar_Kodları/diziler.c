
#include <stdio.h>
#include <string.h>
//başarılı girişse 1 değilse 0
int girisYap(){
    char yetkiliKullanici[] = "root";
    char yetkiliParola[] = "123456";
    
    char kullaniciAdi[10];
    char kullaniciParola[10];
    
    printf("Kullanıcı adını giriniz: ");
    scanf("%s" , kullaniciAdi);
    
    printf("Parolayı giriniz: ");
    scanf("%s" , kullaniciParola);
    
    if(strcmp(yetkiliKullanici , kullaniciAdi) == 0
        && strcmp(yetkiliParola , kullaniciParola) == 0
    ){
        return 1;
    }
    else{
        return 0;
    }
}

int yazdir(int dizi[], int uzunluk){
    for(int i = 0 ; i < uzunluk ; i++){
        printf("%d- " , dizi[i]);
    }
    printf("\n");
}
void sinifOrtalamaHesapla(int dizi[] , int uzunluk){
    int toplam = 0 ;
    for(int i = 0 ; i  < uzunluk ; i++){
        toplam = toplam + dizi[i];
    }
    printf("Sınıfın ortalaması = %f" , (float) toplam/uzunluk);
}
int main()
{
    if(girisYap() == 1){
        int ogrenciSayisi ;
        printf("Öğrenci sayısını giriniz: ");
        scanf("%d" , &ogrenciSayisi);
        
        int ogrenciNotlari[ogrenciSayisi];
        
        for(int i = 0 ;  i< ogrenciSayisi ; i++){
            printf("%d. öğrencinin notunu giriniz: ", i+1);
            scanf("%d" , &ogrenciNotlari[i]);
        }
        
        yazdir(ogrenciNotlari , ogrenciSayisi);
        sinifOrtalamaHesapla(ogrenciNotlari , ogrenciSayisi);
        
    }
    else{
        printf("Başarısız");
    }
 
    return 0;
}