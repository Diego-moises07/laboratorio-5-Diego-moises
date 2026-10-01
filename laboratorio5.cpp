#include <iostream>
using namespace std;

int main() {
    int opcion;
    cin >> opcion;

    switch (opcion) {
        cout << "circulo" << endl;
         double radio, area;
             cin >> radio;
                area = 3.1416 * radio * radio;
                    cout << "El area del circulo es: " << area << endl;
             break;
        cout << "cuadrado" << endl;
            double lado, area;
             cin >> lado;
                 area = lado * lado;
                    cout << "El area del cuadrado es: " << area << endl;
            break;
        cout << "triangulo" << endl;
            double base, altura, area;
             cin >> base >> altura;
                 area = (base * altura) / 2;
                    cout << "El area del triangulo es: " << area << endl;
            break;
            default:
                cout << "Opcion no valida" << endl;
    }
    return 0;
}