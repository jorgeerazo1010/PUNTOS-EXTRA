#include <iostream>
using namespace std;

struct Empleado
{
    string nombre;
    int edad;
    float salario;
};

void mostrarEmpleados(Empleado empleados[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "Empleado " << i + 1 << endl;
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Edad: " << empleados[i].edad << endl;
        cout << "Salario: " << empleados[i].salario << endl;
    }
}

void MayorSalario(Empleado empleados[], int n)
{
    int indice = 0; // Nos ayuda a encontrar la  posicion donde esta el mayor
    for (int i = 0; i < n; i++)
    {
        if (empleados[i].salario > empleados[indice].salario)
        {
            indice = i;
        }
    }
    cout << "\nEmpleado con mayor salario:" << endl;
    cout << "Nombre: " << empleados[indice].nombre << endl;
    cout << "Edad: " << empleados[indice].edad << endl;
    cout << "Salario: $" << empleados[indice].salario << endl;
}

int main()
{
    int n = 5;
    Empleado empleados[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese los datos del empleado" << endl;
    cout << "Nombre: " <<endl; 
    cin >> empleados[i].nombre; 
    cout << "Edad: " << endl;
    cin >> empleados[i].edad;
    cout << "Salario: " << endl;
    cin >> empleados[i].salario ;
    }

    mostrarEmpleados(empleados, n); //Impresion
    MayorSalario(empleados, n);
    
    
}