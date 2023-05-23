#include <iostream>

#include <vector>

using namespace std;

bool isGanjil(int number) {

    return number % 2 != 0;

}

void cetakNilaiGenapTerkecil(const vector<int>& angka) {

    int nilaiGenapTerkecil = INT_MAX;

    int indeks = -1;

    for (int i = 0; i < angka.size(); i++) {

        if (angka[i] % 2 == 0 && angka[i] < nilaiGenapTerkecil) {

            nilaiGenapTerkecil = angka[i];

            indeks = i;

        }

    }

    if (indeks != -1) {

        cout << "Nilai genap terkecil: " << nilaiGenapTerkecil << endl;

        cout << "Indeks: " << indeks << endl;

    } else {

        cout << "Tidak ada bilangan genap dalam deret." << endl;

    }

}

int main() {

    vector<int> angka = {6, 7, 4, 3, 2};

    cetakNilaiGenapTerkecil(angka);

    return 0;

}
