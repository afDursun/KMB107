#include <stdio.h>

int alan_bul(int PI, int r);
int cevre_bul(int PI, int r);

int main()
{
   int yaricap;
   printf("Yarıçap değerini giriniz: ");
   scanf("%d" , &yaricap);
   
   int alan = alan_bul(3 , yaricap);
   printf("Çemberin alanı %d\n" , alan);
   
   int cevre = cevre_bul(3 , yaricap);
   printf("Çemberin çevresi %d" , cevre);
   
    return 0;
}

int alan_bul(int PI, int r){
    return PI * (r * r);
}

int cevre_bul(int PI, int r){
    return 2 * PI * r;
}