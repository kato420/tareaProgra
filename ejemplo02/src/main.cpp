#include <iostream>
using namespace std;
// EJEMPLO 02
int main(int argc, char const *argv[])
{
    double a, b, c;
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        cout << "El triangulo valido es ";
        if (a == b && b == c && a == c)
        {
            cout << " equilatero." << endl;
        }
        else
        {
            if (a == b || b == c || a == c)
            {
                cout << " isóceles." << endl;
            }
            else
            {
                cout << " escalar." << endl;
            }
        }
    }
    else
    {
        cout << "No es triángulo válido." << endl;
    }

    return 0;
}
