// 3. Buatlah sebuah program yang menerima input angka dan menjumlahkan angka prima yang
// terdapat dalam angka yang dimasukkan tersebut.
// Contoh:
// Input: 982647
// Output: 9 


#include <iostream>

using namespace std;

int main() {
    long long angka, totalPrima = 0;
    cout << "Masukkan sebuah angka: ";
    cin >> angka;
    angka = abs(angka);
    while (angka > 0) {
        int digit = angka % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            totalPrima += digit;
        }
        angka /= 10;
    }
    cout << "Jumlah angka prima dalam input adalah: " << totalPrima << endl;
    return 0;
}
