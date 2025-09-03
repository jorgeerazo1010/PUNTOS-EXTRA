#include <iostream>
using namespace std;

float calcularPromedio(int notas[], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += notas[i];
    }
    return (float)suma / n;
}

void evaluacionPromedios(float promedios[], int n)
{
    int aprobados = 0, desaprobados = 0;
    for (int i = 0; i < n; i++)
    {
        if (promedios[i] >= 6.0)
            aprobados++;
        else
            desaprobados++;
    }
    cout << "\nCantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de reprobados: " << desaprobados << endl;
}

int main()
{
    int n, numeroNotas;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;
    cout << "Ingrese la cantidad de notas que desea ingresar por estudiante: ";
    cin >> numeroNotas;

    float promedios[n];

    for (int i = 0; i < n; i++)
    {
        int notas[numeroNotas];
        cout << "Ingrese las notas del estudiante " << i + 1 << endl;
        for (int i = 0; i < numeroNotas; i++)
        {
            cout << "Nota " << i + 1 << ": ";
            cin >> notas[i];
        }
        promedios[i] = calcularPromedio(notas, numeroNotas);
    }

    cout << "Los promedios de los estudiantes quedan" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Estudiante " << i + 1 << ": " << promedios[i] << endl;
    }

    cout << "Los aprobados y desaprobados quedan asi: " << endl;
    evaluacionPromedios(promedios, n);

    return 0;
}
