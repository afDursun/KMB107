# L19 & R19 Laboratuvar Ortamı Uygulama Talimatları
Bu bölümde C dilinin laboratuvar ortamında kullanılmasına ilişkin bilgilendirmeler yapılacaktır.

## Laboratuvar Ortamında Kullanım
Bilgisayarların masaüstünde bulunan _`Classroom Terminal`_ simgesine [1] çift tıklayın. Ardından çıkan konsol ekranına [2] aşağıdaki komutu yazarak **`Enter`**'a basınız.

```
code .
```
<p align="center">
<img src="https://afdursun.com.tr/kmb107/1.png" alt="Adım1" height="500">
</p>

Bu şekilde Visual Studio Code uygulaması açılmış olacaktır. Sonrasında sol alanda bulunan kısıma [3] sağ tıklayarak yeni bir dosya oluşturun. Dosyaya bir isim verin ve sonuna .c yazınız. Aşağıdaki örnekte **`deneme.c`** [4] isminde yeni bir C dosyasının oluşturulması gösterilmektedir.
<p align="center">
<img src="https://afdursun.com.tr/kmb107/2.png" alt="Adım2" height="500">
</p>
Dosya içeriğine [5] gerçekleştirilmek istenen kod yazılır. Ardından Terminal sekmesinden [6] yeni bir terminal açılır. 
Sonrasında şu komut ile dosya derlenir [7] (_buradaki deneme kısmına dosyaya verdiğiniz isimi yazınız_).

```
gcc deneme.c
```

Derlenen dosyayı çalıştırmak için şu komnutu yazın [8]
```
./a.out
```
<p align="center">
<img src="https://afdursun.com.tr/kmb107/3.png" alt="Adım3" height="500">
</p>