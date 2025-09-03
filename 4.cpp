#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N = 5;

void llenarMatriz(int matriz[N][N]) {
    srand(time(0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 100;
        }
    }
}

void mostrarMatriz(int matriz[N][N]) {
    cout << "Matriz 5x5:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void sumarFilasColumnas(int matriz[N][N]) {
    cout << "Suma de cada fila:" << endl;
    for (int i = 0; i < N; i++) {
        int sumaFila = 0;
        for (int j = 0; j < N; j++) {
            sumaFila += matriz[i][j];
        }
        cout << "Fila " << (i+1) << ": " << sumaFila << endl;
    }
    cout << "Suma de cada columna:" << endl;
    for (int j = 0; j < N; j++) {
        int sumaColumna = 0;
        for (int i = 0; i < N; i++) {
            sumaColumna += matriz[i][j];
        }
        cout << "Columna " << (j+1) << ": " << sumaColumna << endl;
    }
}

void mayorElemento(int matriz[N][N]) {
    int mayor = matriz[0][0];
    int fila = 0, columna = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                fila = i;
                columna = j;
            }
        }
    }
    cout << "El numero mayor es " << mayor 
         << " en la posicion [" << (fila+1) << "][" << (columna+1) << "]" << endl;
}

int main() {
    int matriz[N][N];
    llenarMatriz(matriz);
    mostrarMatriz(matriz);
    sumarFilasColumnas(matriz);
    mayorElemento(matriz);
    return 0;
}
