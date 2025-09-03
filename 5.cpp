#include <iostream>
using namespace std;

struct Estudiante
{
    string nombre;
    int edad;
    float promedio;
};

void insertarEstudiantes(Estudiante *lista, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Estudiante " << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin >> ws, lista[i].nombre);
        cout << "Edad: ";
        cin >> lista[i].edad;
        cout << "Promedio: ";
        cin >> lista[i].promedio;
    }
}

void mostrarEstudiantes(Estudiante *lista, int n)
{
    cout << "Lista de estudiantes " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Nombre: " << lista[i].nombre << endl;
        cout << "Edad: " << lista[i].edad << endl;
        cout << "Promedio: " << lista[i].promedio << endl;
    }
}

void mejorPromedio(Estudiante *lista, int n)
{
    if (n == 0)
    {
        cout << "No hay estudiante" << endl;
        return;
    }

    int pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (lista[i].promedio > lista[pos].promedio)
        {
            pos = i;
        }
    }
    cout << " " << endl;
    cout << "Estudiante con mejor promedio:" << endl;
    cout << "Nombre: " << lista[pos].nombre << endl;
    cout << "Edad: " << lista[pos].edad << endl;
    cout << "Promedio: " << lista[pos].promedio << endl;
}

void liberarMemoria(Estudiante *lista)
{
    delete[] lista;
    cout << " " << endl;
    cout << "Memoria liberada correctamente." << endl;
}

int main()
{
    int n;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;

    Estudiante *lista = new Estudiante[n];

    insertarEstudiantes(lista, n);
    mostrarEstudiantes(lista, n);
    mejorPromedio(lista, n);

    liberarMemoria(lista);

    return 0;
}