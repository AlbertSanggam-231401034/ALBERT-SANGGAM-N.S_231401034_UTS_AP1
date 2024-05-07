// 4. Perbaikilah code yang sudah tersedia di GitHub dengan nama soal4.cpp. 

// # Yang Salah 

// #Include <Stdio.H>
// #inlcude "math.h"

// float main(void) {
//     SYSTEM("CLS"):

//     cout << "Insert a number: ";
//     cin << n;

//     if (n >= 1) {
//         cout << n << " bukanlah bilangan prima.";
//     } else {
//         for (int i = 1; i <= sqrt(n); i++) {
//             if (n % 1 == 2) {
//                 cout >> n << " bukanlah bilangan prima.";
//             }
//         }

//         coute >> n << "Merupakan bilangan prima.";
//     }

//     return 1;
// }

// # Yang Benar

#include <iostream> 
#include <cmath> 

using namespace std; 

int main() {
    system("CLS"); 

    int n; 
    cout << "Insert a number: ";
    cin >> n; 

    if (n <= 1) { 
        cout << n << " bukanlah bilangan prima."; 
    } else {
        bool isPrime = true; 
        for (int i = 2; i <= sqrt(n); i++) { 
            if (n % i == 0) {
                isPrime = false; 
                break; 
            }
        }

        if (isPrime) {
            cout << n << " merupakan bilangan prima."; 
        } else {
            cout << n << " bukanlah bilangan prima.";
        } 
    }

    return 0; 
}

//Mengubah header #Include <Stdio.H> menjadi #include <iostream>.
//Mengubah #inlcude "math.h" menjadi #include <cmath>.
//Memakaikan using namespace std; agar tak perlu melakukannya berulang untuk setiap cin dan cout.
//Mengubah float main(void) menjadi int main().
//Mengubah SYSTEM("CLS"): seharusnya system("CLS");.
//Perlu deklarasi variabel n sebelum menggunakannya.
//Perlu pengecekan untuk bilangan 1 yang seharusnya tidak dianggap bilangan prima.
//Pengecekan dalam loop for memiliki kesalahan logika.
//Pemanggilan cout yang tidak konsisten.
//Sebaiknya nilai kembali dari main adalah 0, karena itu menunjukkan bahwa program telah berjalan dengan sukses.