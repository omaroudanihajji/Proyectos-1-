#include <iostream>
using namespace std;

int main() {
    string nombre;

    cout << "¿Cómo te llamas?";
    getline (cin, nombre);
    cout << "Hola," << nombre << ", vamos a trabajar" << endl;
    return 0;
}