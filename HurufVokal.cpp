#include <iostream>

using namespace std;

int main() {

    // char untuk menerima karakter

    char vokal;

    cout << "Masukkan huruf : ";
    cin >> vokal;

    // menggunakan OR agar ketika menerima input dari user baik lowercase maupun uppercase
    // hasilnya true.

    if(vokal == 'a' || vokal == 'A' || vokal == 'i' || vokal == 'I' || vokal == 'u' ||

     vokal == 'U' || vokal == 'e' || vokal == 'E' || vokal =='o' || vokal == 'O') {

        cout << vokal << " merupakan huruf vokal" << endl;
    }

    return 0;
}

