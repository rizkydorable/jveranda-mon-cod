#include <iostream>
#include <iomanip>

using namespace std;

int main() {


    float nilai1, nilai2, hasil;

    cout << "Masukkan bilangan yang akan dibagi\t: ";
    cin >> nilai1;

    cout << "Masukkan bilangan pembagi\t\t: ";
    cin >> nilai2;

    hasil = nilai1 / nilai2;

    if((nilai1 / nilai2) == hasil) {

        cout << setiosflags(ios::fixed) << endl;
        cout << setprecision(2) << "Hasil bagi\t\t\t\t: " << hasil << endl;

    } else {

        cout << endl;
        cout << "\t\tError!" << endl;
    }

    return 0;
}
