#include <iostream>
using namespace std;

// Fungsi untuk melakukan penukaran elemen
void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi rekursif Bubble Sort
void recursiveBubbleSort(int arr[], int n) {
    // Base case: jika hanya ada 1 elemen, array sudah terurut
    if (n == 1)
        return;

    // Lakukan satu iterasi Bubble Sort
    for (int i = 0; i < n - 1; i++) {s
        if (arr[i] > arr[i + 1]) {
            Swap(arr[i], arr[i + 1]);
        }
    }

    // Panggil rekursif Bubble Sort untuk n-1 elemen terakhir
    recursiveBubbleSort(arr, n - 1);
}

// Fungsi untuk mencetak array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum sorting: ";
    printArray(arr, n);

    recursiveBubbleSort(arr, n);

    cout << "Array setelah sorting: ";
    printArray(arr, n);

    return 0;
}
