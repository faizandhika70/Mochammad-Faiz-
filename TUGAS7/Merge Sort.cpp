#include <iostream>
using namespace std;

// Fungsi untuk menggabungkan dua subarray terurut menjadi satu array terurut
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    // Salin elemen ke array sementara L[] dan R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Gabungkan kembali dua subarray ke array asli
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Salin sisa elemen dari L[] jika ada
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Salin sisa elemen dari R[] jika ada
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi rekursif Merge Sort
void recursiveMergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Cari titik tengah array
        int mid = left + (right - left) / 2;

        // Panggil rekursif Merge Sort untuk dua bagian array
        recursiveMergeSort(arr, left, mid);
        recursiveMergeSort(arr, mid + 1, right);

        // Gabungkan dua subarray yang terurut
        merge(arr, left, mid, right);
    }
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

    recursiveMergeSort(arr, 0, n - 1);

    cout << "Array setelah sorting: ";
    printArray(arr, n);

    return 0;
}
