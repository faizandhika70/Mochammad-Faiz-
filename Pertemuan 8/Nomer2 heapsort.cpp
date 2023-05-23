#include <iostream>

using namespace std;

void heapSort(int arr[], int n);

void heapify(int arr[], int n, int i);

void Swap (int &a, int &b);

int main()

{

    int arr[] = {15, 1, 7, 2};

    int n = 4;

    cout << "Array sebelum diurutkan: ";

    for (int i = 0; i < n; i++)

        cout << arr[i] << " ";

    heapSort(arr, n);

    cout << "\n";

    cout << "Array diurutkan dari yang  terbesar: ";

    for (int i = 0; i < n; i++)

        cout << arr[i] << " ";

    return 0;

}

void heapSort(int arr[], int n)

{

    for (int i = n / 2 - 1; i >= 0; i--)

        heapify(arr, n, i);

    for (int i=n-1; i>=0; i--)

    {

        Swap(arr[0], arr[i]);

        heapify(arr, i, 0);

    }

}

void heapify(int arr[], int n, int i)

{

    int largest = i;

    int l = 2*i + 1;

    int r = 2*i + 2;

    if (l < n && arr[l] < arr[largest])

        largest = l;

    if (r < n && arr[r] < arr[largest])

        largest = r;

    if (largest != i)

    {

        Swap(arr[i], arr[largest]);

        heapify(arr, n, largest);

    }

}

void Swap (int &a, int &b){

    int Temp;

    Temp = b;

    b = a;

    a = Temp;

}
