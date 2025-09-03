#include <iostream>
using namespace std;

struct Producto
{
    int codigo;
    string nombre;
    float precio;
    int cantidad;
};

const int max_productos = 100;
Producto inventario[max_productos];
int totalProductos = 0;

int agregarProducto(Producto inventario[], int n)
{
    if (n >= max_productos)
    {
        cout << "El inventario esta lleno." << endl;
        return n;
    }

    Producto nuevo;
    cout << "Nuevo producto: " <<endl;
    cout << "Codigo: " <<endl;
    cin >> nuevo.codigo;
    cout << "Nombre: " <<endl;
    getline(cin >> ws, nuevo.nombre);
    cout << "Precio: " <<endl;
    cin >> nuevo.precio;
    cout << "Cantidad: " <<endl;
    cin >> nuevo.cantidad;

    inventario[n] = nuevo;
    cout << "Producto agregado" << endl;

    return n + 1;
}

int buscarProducto(Producto inventario[], int n, int codigo)
{
    for (int i = 0; i < n; i++)
    {
        if (inventario[i].codigo == codigo)
        {
            return i;
        }
    }
    return -1;
}

void mostrarProductoEncontrado(Producto inventario[], int n)
{
    int codigo;
    cout << "Ingrese el codigo del producto a buscar: " <<endl;
    cin >> codigo;

    int pos = buscarProducto(inventario, n, codigo);

    if (pos == -1)
    {
        cout << "Producto no encontrado." << endl;
        return;
    }

    cout << "Producto encontrado:" << endl;
    cout << "Codigo: " << inventario[pos].codigo << endl;
    cout << "Nombre: " << inventario[pos].nombre << endl;
    cout << "Precio: $" << inventario[pos].precio << endl;
    cout << "Cantidad: " << inventario[pos].cantidad << endl;
}

void calcularValorTotal(Producto inventario[], int n)
{
    float total = 0;
    for (int i = 0; i < n; i++)
    {
        total += inventario[i].precio * inventario[i].cantidad;
    }
    cout << "Valor total del inventario: $" << total << endl;
}

int main()
{
    totalProductos = agregarProducto(inventario, totalProductos);

    mostrarProductoEncontrado(inventario, totalProductos);

    calcularValorTotal(inventario, totalProductos);

    return 0;
}
