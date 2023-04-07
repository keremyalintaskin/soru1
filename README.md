# En Yakın Toplam Bulma
Bu program, kullanıcının girdiği bir sayı dizisindeki üç farklı sayıyı seçerek bu üç sayının toplamını hedef sayıya en yakın hale getirir. Bu program, C programlama dili kullanılarak yazılmıştır.

# Nasıl Çalışır?
Program, kullanıcıdan hedef sayıyı ve dizi boyutunu isteyerek başlar. Daha sonra, kullanıcı, dizi elemanlarını tek tek girmesi istenir. Ardından, program tüm olası üç sayı kombinasyonlarını toplar ve hedef sayıya en yakın toplamı bulur. Bu işlem tamamlandıktan sonra, program en yakın toplamı ve hangi üç sayının toplamının bu sonucu verdiğini yazdırır.

# Kullanılan Fonksiyonlar
Program, aşağıdaki C fonksiyonlarını kullanır:

main(): Programın ana fonksiyonudur. Kullanıcının girdiği verileri alır ve findClosestSum() fonksiyonunu çağırır.
findClosestSum(): Programın ana hesaplama işlemini gerçekleştiren fonksiyondur. Bu fonksiyon, üç farklı sayı kombinasyonunu toplayarak hedef sayıya en yakın olanını bulur ve sonucu ekrana yazdırır.
# Değişkenler
Programda aşağıdaki değişkenler kullanılmaktadır:

size: Kullanıcının girdiği dizi boyutunu tutar.
element: Kullanıcının girdiği dizinin elemanlarını tutar.
array: Dizi elemanlarını tutmak için dinamik olarak oluşturulan bir dizi.
target: Kullanıcının girdiği hedef sayıyı tutar.
closest_i, closest_j, closest_k: En yakın toplamı veren üç sayının dizideki indexlerini tutar.
closest_diff: Hedef sayıya en yakın toplamın farkını tutar.
i, j, k: Döngülerde kullanılan geçici değişkenlerdir.
