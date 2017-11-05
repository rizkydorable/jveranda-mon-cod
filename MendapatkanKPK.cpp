#include <iostream>

using namespace std;

int main() {

    int a, b, maximal;

    cout << "Masukkan bilangan ke-1 : ";
    cin >> a;

    cout << "Masukkan bilangan ke-2 : ";
    cin >> b;

    if(a > b) {

        maximal = a;
    } else {

        maximal = b;
    }

    do {

        if(maximal % a == 0 && maximal % b == 0) {

            cout << "KPK : " << maximal << endl;
            break;

        } else {

            maximal++;
        }

    } while(true);

    return 0;
}
