#include <iostream>
using namespace std;

int main() {
    const int target = 200;  // Hedef toplam 200 peni
    const int paradegerleri = 8;  // Toplamda 8 farklı bozuk para var
    int paralar[paradegerleri] = {1, 2, 5, 10, 20, 50, 100, 200};  // Bozuk para değerleri

    int ways[target + 1] = {0};  // 0'dan 200'e kadar tüm kombinasyonlar için dizi
    ways[0] = 1;  // 0 peni yapmanın 1 yolu var (hiç para kullanmadan)

    // Her bozuk para için kombinasyonları hesapla
    for (int i = 0; i < paradegerleri; i++) {
        for (int j = paralar[i]; j <= target; j++) {
            ways[j] += ways[j - paralar[i]];
        }
    }

    cout << "2 Pound yapmanin toplam yollari: " << ways[target] << endl;
    return 0;
}
