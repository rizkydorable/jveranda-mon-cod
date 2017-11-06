#include <iostream>

using namespace std;

int main() {

    int a, hasil = 0;

    cout << "Masukkan bilangan : ";
    cin >> a;

    cout << "Hasil : ";

    for(int x = a; x > 0; x--) {

        hasil += x;

        if(x != 1) {

            cout << x << " + ";

        } else {

            cout << x << " = ";
        }
    }

    cout << hasil << endl;

    return 0;
}

