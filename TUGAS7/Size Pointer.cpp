#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p = &x;

    cout << "Ukuran pointer: " << sizeof(p) << " bytes" << endl;


    return 0;
}
