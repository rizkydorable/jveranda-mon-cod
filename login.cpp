#include <iostream>

using namespace std;

int main () {

    int salah = 0, password;
    string username;

    string ussr = "Admin";
    int pass = 12345;

    /*  Username harus text (string)
        Password harus angka
    */

    do {

        cout << "Masukkan Username : ";
        cin >> username;

        cout << "Masukkan Password : ";
        cin >> password;

        if(username == ussr && password == pass) {

            cout << "BENAR" << endl;
            break;

        } else {

            cout << "SALAH" << endl;

            salah += 1;
        }

    } while(salah < 3);

    cout << endl;

    if(salah == 3) {

        cout << "Username and Password is incorrect. You only had 3x chance to repeat it. " << endl;
    }

    return 0;
}