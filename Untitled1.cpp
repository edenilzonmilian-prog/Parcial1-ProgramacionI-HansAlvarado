#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string nombreCliente;
    string nombreEstudiante = "Hans Douglas Edenilzon Alvarado Milian";
    double precioProducto;
    int cantidad;
    double subtotal;
    double iva;
    double total;

    cout << "Ingrese el nombre del cliente: ";
    getline(cin, nombreCliente);

    cout << "Ingrese el precio del producto: ";
    cin >> precioProducto;

    cout << "Ingrese la cantidad comprada: ";
    cin >> cantidad;

    subtotal = precioProducto * cantidad;
    iva = subtotal * 0.12;
    total = subtotal + iva;

    cout << fixed << setprecision(2);

    cout << "\n----- FACTURA -----\n";
    cout << "Estudiante: " << nombreEstudiante << endl;
    cout << "Cliente: " << nombreCliente << endl;
    cout << "Subtotal: Q " << subtotal << endl;
    cout << "IVA (12%): Q " << iva << endl;
    cout << "Total a pagar: Q " << total << endl;

    return 0;
}
