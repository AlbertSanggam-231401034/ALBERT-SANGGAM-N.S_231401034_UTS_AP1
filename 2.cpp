//  2. Buatlah sebuah program untuk menerima input kalimat dan mengubah semua kalimat
// tersebut menjadi huruf kapital.
// Contoh:
// Input: Hello World
// Output: HELLO WORLD 


#include <iostream>
#include <string>

using namespace std;

int main() {
    system("cls");
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    for (char& karakter : kalimat) {
        if (karakter >= 'a' && karakter <= 'z') {
            karakter -= ('a' - 'A');
        }
    }
    cout << "Kalimat dalam huruf kapital: " << kalimat << endl;
    return 0;
}
