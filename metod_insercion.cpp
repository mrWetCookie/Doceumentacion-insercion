#include <iostream>
using namespace std;

int main() {
    int arreglo[] = {33, 4, 56, 40, 99, 2, 76, 11, 25, 81};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    for (int i = 1; i < n; ++i) {
        int valorActual = arreglo[i];
        int j = i - 1;
        
        while (j >= 0 && arreglo[j] > valorActual) {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }
        
        arreglo[j + 1] = valorActual;
    }

    cout << "Arreglo ordenado de forma ascendente: ";
    for (int i = 0; i < n; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
