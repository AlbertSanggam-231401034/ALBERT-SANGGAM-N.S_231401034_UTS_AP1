//1.  Buatlah sebuah program yang menerima input waktu dalam detik dan mengembalikan
// waktu tersebut dengan format “HH:MM:SS” dengan beberapa ketentuan, yaitu:
// - Input tidak dapat berupa angka negatif
// - Output waktu tetap harus berupa angka dua digit untuk jam, menit dan detik (01:01:01)
// Contoh:
// Input: 5678
// Output: 01:34:38 


#include <iostream>

using namespace std;

int main() {
    int totalDetik;
    int jam, menit, detik;
    system("cls");
    cout << "Masukkan waktu dalam detik: ";
    cin >> totalDetik;
    if (totalDetik < 0) {
        cout << "Input tidak dapat berupa angka negatif.\n";
        return 1;
    }

    jam = totalDetik / 3600;
    int sisaDetik = totalDetik % 3600;
    menit = sisaDetik / 60;
    detik = sisaDetik % 60;

    cout << "Waktu: ";
    if (jam < 10) cout << "0";
    cout << jam << ":";
    if (menit < 10) cout << "0";
    cout << menit << ":";
    if (detik < 10) cout << "0";
    cout << detik << endl;

    return 0;
}