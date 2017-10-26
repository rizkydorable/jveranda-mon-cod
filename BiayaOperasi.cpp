#include <iostream>

using namespace std;

// untuk menampilkan bintang (*) sebagai hiasan pada program

void bintang() {

    cout << "\t";

    for(int x = 0; x < 19; x++) {

        cout << " * ";
    }

    cout << endl;
}

// untuk menampilkan menu biaya operasi pada program

void namaOperasi() {

    cout << endl;
    cout << "\t\t<< MENU MENGHITUNG BIAYA OPERAASI >>" << endl << endl;
    cout << "\t\t1. Menghitung Baiaya Operasi Mata" << endl;
    cout << "\t\t2. Menghitung Biaya Operasi Jantung" << endl;
    cout << endl;
}

// untuk meminta user menginputkan pilihan

void inputkanKode() {

    cout << "\t\tMasukkan Pilihan Anda : ";
}

// untuk menampilkan menu jenis penyakit mata

void jenisPenyakitMata() {

    cout << endl;
    cout << "\t\tJENIS PENYAKIT MATA" << endl << endl;
    cout << "\t\t1. Katarak" << endl;
    cout << "\t\t2. Plus / Minus" << endl;
    cout << "\t\t3. Silinder" << endl;
    cout << endl;
}

// untuk meminta user menginputkan pilihan jenis penyakit mata

void inputkanPenyakitMata() {

    cout << "\t\tMasukkan Jenis Penyakit Mata : ";
}

// untuk menampilkan menu jenis penyakit jantung

void jenisPenyakitJantung() {

    cout << endl;
    cout << "\t\tJENIS PENYAKIT JANTUNG" << endl << endl;
    cout << "\t\t1. Jantung Koroner" << endl;
    cout << "\t\t2. Katup Jantung" << endl;
    cout << "\t\t3. Otot Jantung" << endl;
    cout << endl;
}

// untuk meminta user menginputkan pilihan jenis penyakit jantung

void inputkanPenyakitJantung() {

    cout << "\t\tMasukkan Jenis Penyakit Jantung : ";
}

// kode program

int main() {

    int kodePilihan;

    bintang();
    namaOperasi();

    inputkanKode();
    cin >> kodePilihan;

    // percabangan

    if(kodePilihan == 1) {

        jenisPenyakitMata();

        inputkanPenyakitMata();
        cin >> kodePilihan;

        switch(kodePilihan) {

            case 1:

                cout << endl;
                cout << "\t\tBiaya Operasi Mata Katarak = Rp. 7.500.000" << endl << endl;
                bintang();
                break;

            case 2:

                cout << endl;
                cout << "\t\tBiaya Operasi Mata Plus / Minus = Rp. 5.000.000" << endl << endl;
                bintang();
                break;

            case 3:

                cout << endl;
                cout << "\t\tBiaya Operasi Mata Silinder = Rp. 4.000.000" << endl << endl;
                bintang();
                break;
        }

    } else if(kodePilihan == 2) {

        jenisPenyakitJantung();

        inputkanPenyakitJantung();
        cin >> kodePilihan;

        switch(kodePilihan) {

            case 1:

                cout << endl;
                cout << "\t\tBiaya Operasi Jantung Koroner = Rp. 500.000.000" << endl << endl;
                bintang();
                break;

            case 2:

                cout << endl;
                cout << "\t\tBiaya Operasi Katup Jantung = Rp. 350.000.000" << endl << endl;
                bintang();
                break;

            case 3:

                cout << endl;
                cout << "\t\tBiaya Operasi Otot Jantung = Rp. 450.000.000" << endl << endl;
                bintang();
                break;
        }

    } else {

        cout << endl;
        cout << "\t\tKode Salah!" << endl << endl;
        bintang();
    }

    return 0;
}
