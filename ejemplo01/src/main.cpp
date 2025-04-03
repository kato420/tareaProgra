#include <iostream>
using namespace std;

// Ejercicio 01
int main(int argc, char *argv[])
{
    int cantidad;
    double precio;
    cin >> cantidad;
    cin >> precio;
    double total = cantidad * precio;
    if (1001 <= cantidad)
    {
        total *= 0.6;
    }
    else if (251 <= cantidad)
    {
        total *= 0.8;
    }
    else if (101 <= cantidad)
    {
        total *= 0.9;
    }

    cout << "El pago  por la compra es: " << total << " soles." << endl;
    return 0;
}
