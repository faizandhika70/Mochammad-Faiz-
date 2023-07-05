/*
~~~~ UAS ~~~~
Nama : Mochammad Faiz Andhika Kusuma 
Nim  : A11.2022.14470
Kls  : 4213
Mtk  : Alpro
*/

#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    int nilai[5];
};

// Fungsi untuk mencetak nama, nim, dan nilai mahasiswa
void cetakDataMahasiswa(const Mahasiswa& mhs) {
    cout << "Nama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "Nilai 1: " << mhs.nilai[0] << endl;
    cout << "Nilai 2: " << mhs.nilai[1] << endl;
    cout << "Nilai 3: " << mhs.nilai[2] << endl;
    cout << "Nilai 4: " << mhs.nilai[3] << endl;
    cout << "Nilai 5: " << mhs.nilai[4] << endl;
    cout << endl;
}

// Fungsi untuk menukar dua nilai menggunakan pointer
void tukarNilai(int* nilai1, int* nilai2) {
    int temp = *nilai1;
    *nilai1 = *nilai2;
    *nilai2 = temp;
}

// Fungsi rekursif untuk menghitung total nilai
int hitungTotalNilai(const int* nilai, int n) {
    if (n == 0) {
        return 0;
    }
    return nilai[n - 1] + hitungTotalNilai(nilai, n - 1);
}

// Fungsi untuk melakukan sorting deret nilai dengan bubble sort
void sortingNilai(int* nilai, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nilai[i] > nilai[j]) {
                tukarNilai(&nilai[i], &nilai[j]);
            }
        }
    }
}

int main() {
    Mahasiswa mhs;
    mhs.nama = "Ardiawan Bagus";
    mhs.nim = "A11.2020.99999";
    mhs.nilai[0] = 90;
    mhs.nilai[1] = 91;
    mhs.nilai[2] = 99;
    mhs.nilai[3] = 75;
    mhs.nilai[4] = 80;

    // Sebelum di Swap
    cout << "Sebelum di Swap" << endl;
    cetakDataMahasiswa(mhs);

    // Melakukan pertukaran nilai
    tukarNilai(&mhs.nilai[0], &mhs.nilai[4]);

    // Setelah di Swap
    cout << "Setelah di Swap" << endl;
    cetakDataMahasiswa(mhs);

    // Menghitung total nilai
    int totalNilai = hitungTotalNilai(mhs.nilai, 5);

    // Menghitung nilai rata-rata
    double rataRata = static_cast<double>(totalNilai) / 5;

    // Output nilai rata-rata
    cout << "Nilai Rata-Rata: " << rataRata << endl;

    return 0;
