#include <iostream>
using namespace std;

// Fungsi rekursif Divide and Conquer untuk mencari elemen terbesar dan terkecil
void recursiveDivideAndConquer(int arr[], int left, int right, int& minElement, int& maxElement) {
    // Base case: jika hanya ada satu elemen dalam subarray
    if (left == right) {
        minElement = arr[left];
        maxElement = arr[left];
        return;
    }

    // Jika subarray hanya memiliki dua elemen
    if (left + 1 == right) {
        if (arr[left] < arr[right]) {
            minElement = arr[left];
            maxElement = arr[right];
        } else {
            minElement = arr[right];
            maxElement = arr[left];
        }
        return;
    }

    // Cari titik tengah array
    int mid = left + (right - left) / 2;

    // Panggil rekursif Divide and Conquer untuk dua subarray
    int leftMin, leftMax, rightMin, rightMax;
    recursiveDivideAndConquer(arr, left, mid, leftMin, leftMax);
    recursiveDivideAndConquer(arr, mid + 1, right, rightMin, rightMax);

    // Gabungkan solusi dari dua subarray
    minElement = min(leftMin, rightMin);
    maxElement = max(leftMax, rightMax);
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

    cout << "Array: ";
    printArray(arr, n);

    int minElement, maxElement;
    recursiveDivideAndConquer(arr, 0, n - 1, minElement, maxElement);

    cout << "Elemen terkecil: " << minElement << endl;
    cout << "Elemen terbesar: " << maxElement << endl;

    return 0;
}
