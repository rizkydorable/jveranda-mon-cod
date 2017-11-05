#include <iostream>

using namespace std;

int main() {

    int a, b, hasil = 1, x = 0;

    cout << "Masukkan bilangan\t: ";
    cin >> a;

    cout << "Masukkan pencacah\t: ";
    cin >> b;

    while(x < b) {

        hasil *= a;

        x++;
    }

    cout << "Hasil pangkat\t\t: " << hasil << endl;

    return 0;
}
