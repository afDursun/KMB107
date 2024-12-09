#include <stdio.h>

int hiz;
int sicaklik;

void marsaBas();
void gaza_bas();
void fren_bas();
void el_freni();

int main()
{
    marsaBas();
    
    gaza_bas(10); gaza_bas(30); gaza_bas(50);
    
    fren_bas(5); fren_bas(30);
    
    el_freni();

    return 0;
}

double sicaklik_kontrol(){
    //eğer sıcaklık 100 ü aşarsa 1 döndürsün
    //sıcaklık normal ise de 0 döndürsün
    if(sicaklik > 100){
        return 0.5;
    }
    else{
        return 0;
    }
}

void akuyuCalistir(){
    sicaklik = 70;
    printf("Akü aktif edildi....\n");
}

void marsaBas(){
    hiz = 0;
    sicaklik = 0;
    printf("Marşa basıldı.....\n");
    akuyuCalistir();
}

void gaza_bas(int artis_miktari){
    hiz = hiz + artis_miktari;
    sicaklik = sicaklik + 20;
    printf("Araba hareket ediyor mevcut hız %d....\n", hiz);
    
    if(sicaklik_kontrol() == 0.5){
        printf("Bir problem var.....\n");
    }
    
    
}

void fren_bas(int frenleme_miktari){
    hiz = hiz - frenleme_miktari;
    printf("Araba yavaşlıyor.... mevcut hız %d.....\n", hiz);
    
    if(sicaklik_kontrol() == 0.5){
        printf("Bir problem var.....\n");
    }
}

void el_freni(){
    hiz = 0 ;
}