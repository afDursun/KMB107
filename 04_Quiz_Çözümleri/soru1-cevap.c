#include <stdio.h>

int main() {
    double n, T, V, P;
    double R = 8.314;

    // Kullanıcıdan mol sayısını al
    printf("Gazın mol sayısını giriniz: ");
    scanf("%f", &n);
    if (n < 0) {
        printf("Mol sayısı 0'dan küçük olamaz.\n");
        //koşul sağlandığında programı durdurmak için
        return 0;
    }

    // Kullanıcıdan sıcaklığı al
    printf("Gazın sıcaklığını giriniz (Kelvin cinsinden): ");
    scanf("%f", &T);
    if (T < 0) {
        printf("Sıcaklık 0'dan küçük olamaz.\n");
        //koşul sağlandığında programı durdurmak için
        return 0;
    }

    // Kullanıcıdan hacmi al
    printf("Gazın hacmini giriniz (Litre cinsinden): ");
    scanf("%f", &V);
    if (V < 0) {
        printf("Hacim 0'dan küçük olamaz.\n");
        //koşul sağlandığında programı durdurmak için
        return 0;
    }

    // İdeal gaz denklemine göre basıncı hesapla
    P = (n * R * T) / V;

    // Basıncı ekrana yazdır
    printf("Gazın basıncı: %f Pa\n", P);

    return 0;
}