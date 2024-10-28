# Project Euler 031 - Coin Sums

Birleşik Krallık'ta para, pound (£) ve pence (p) olarak ikiye ayrılır. Elimizde sekiz adet madeni para bulunmaktadır:

    1p, 2p, 5p, 10p, 20p, 50p, £1 (100p), ve £2 (200p).

Örnek olarak elimizdeki paralarla aşağıdaki gibi £2 yapabiliriz:

    1 adet £1 + 1 adet 50p + 2 adet 20p + 1 adet 5p + 1 adet 2p + 3 adet 1p = £2

Bu problemde bizden istenen kaç adet yolla £2'a ulaşabiliriz.

Projenin detayı sağdaki linkte mevcuttur. [Project Euler 031](https://projecteuler.net/problem=31)

Peki nasıl £2'a ulaşabiliriz ?

- 1 pound 100 pence'den oluşur. (£1 = 100p)
- Elimizde 8 adet pence cinsinden bozuk para var var: 1, 2, 5, 10, 20, 50, 100, 200
- C++ üzerinden yazdığımız kod ile tüm olasılıkları deneyerek kaç adet yolla £2'a ulaşacağımızı hesaplayacağız.


Oluşturduğum kodu inceleyelim.

Gerekli kütüphaneleri dahil ediyoruz. iostream, standart giriş-çıkış işlemleri için kullanılır. using namespace std; ifadesi, std ad alanındaki öğeleri kullanmamızı sağlar.

    #include <iostream>
    using namespace std;

    
Programın giriş noktası olan main fonksiyonu başlıyor.
 
    int main() {

- target, hedeflediğimiz toplam miktarı (200 peni) belirtiyor.
- paradegerleri, mevcut bozuk para sayısını tanımlıyor.
- paralar dizisi, kullanılabilir bozuk para değerlerini içeriyor. 

      const int target = 200;  // Hedef toplam 200 peni
      const int paradegerleri = 8;  // Toplamda 8 farklı bozuk para var
      int paralar[paradegerleri] = {1, 2, 5, 10, 20, 50, 100, 200};  // Bozuk para değerleri


- ways dizisi, 0'dan 200'e kadar olan her değerin elde edilme yollarını tutuyor. Başlangıçta tüm değerler 0 olarak ayarlanıyor.
- ways[0], 0 peni yapmanın bir yolu olduğunu belirtmek için 1 olarak ayarlanıyor.

      int ways[target + 1] = {0};  // 0'dan 200'e kadar tüm kombinasyonlar için dizi
      ways[0] = 1;  // 0 peni yapmanın 1 yolu var (hiç para kullanmadan)

Dıştaki döngü, her bozuk para değerini sırayla işlemek için kullanılıyor. i değişkeni, hangi bozuk paranın kullanılacağını gösteriyor.

    for (int i = 0; i < paradegerleri; i++) {

- İçteki döngü, mevcut bozuk para kullanılarak hedef değere (200 peni) ulaşmaya çalışıyor.
- j değişkeni, mevcut toplam değeri temsil ediyor.
- ways[j], j değerine ulaşmanın yollarını güncelleyerek, önceki kombinasyonları değerlendiriyor.

      for (int j = paralar[i]; j <= target; j++) {
          ways[j] += ways[j - paralar[i]];
      }
Hesaplanan yolların sayısını ekrana yazdırıyoruz. Bu, 200 peni (2 pound) yapmanın toplam yollarını gösterir.

    cout << "2 Pound yapmanin toplam yollari: " << ways[target] << endl;

Programı sonlandırıyoruz ve 0 değeri döndürerek başarılı bir şekilde tamamlandığını belirtiyoruz.

    return 0;
    }
  


