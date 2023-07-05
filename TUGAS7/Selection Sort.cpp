#include <iostream>
using namespace std;

// Fungsi untuk melakukan penukaran elemen
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi rekursif Selection Sort
void recursiveSelectionSort(int arr[], int n, int index = 0) {
    // Base case: jika sudah mencapai elemen terakhir, array sudah terurut
    if (index == n - 1)
        return;

    // Cari nilai terkecil di sepanjang array
    int minIndex = index;
    for (int i = index + 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Tukar elemen dengan nilai terkecil ke posisi yang benar
    swap(&arr[index], &arr[minIndex]);

    // Panggil rekursif Selection Sort untuk n-1 elemen terakhir
    recursiveSelectionSort(arr, n, index + 1);
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

    recursiveSelectionSort(arr, n);

    cout << "Array setelah sorting: ";
    printArray(arr, n);

    return 0;
}
