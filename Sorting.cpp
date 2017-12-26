#include <iostream>

using namespace std;

// tipe data char untuk menampung data sementara
char temp;

// int n untuk menampung jumlah angka yang diinputkan user
int n;

// prosedur untuk mengurutkan secara ascending
void ascendingSort(char data[], int n) {

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            if(data[i] > data[j]) {

                // menukar karakter jika index ke i lebih dari index ke j

                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

// prosedur untuk mengurutkan secara descending
void descendingSort(char data[], int n) {

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            if(data[i] < data[j]) {

                // menukar karakter jika index ke i kurang dari index ke j

                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}


// prosedur untuk menampilkan data
void display(char data[], int n) {

    for(int i = 0; i < n; i++) {

        cout << data[i] << " ";
    }

    cout << endl;
}

int main() {

    cout << "Input (n) = ";
    cin >> n;
    cout << endl;

    char data[n];

    for(int i = 0; i < n; i++) {

        cout << "Karakter ke " << (i + 1) << " : ";
        cin >> data[i];
    }

    cout << "\nUrutan karakter sebelum sorting : " << endl;
    display(data, n);

    cout << "\nUrutan karakter setelah ascending sort : " << endl;
    ascendingSort(data, n);
    display(data, n);

    cout << "\nUrutan karakter setelah descending sort : " << endl;
    descendingSort(data, n);
    display(data, n);

    return 0;
}
