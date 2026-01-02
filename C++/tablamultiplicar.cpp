#include <iostream>
using namespace std;

int main(){
    float numero; //la tabla de multiplicar que se hará
    
    cout << "Introduzca el número de la tabla de multiplicar que desee: " << endl;
    cin >> numero;
    cout << "Tabla de multiplicar del " << numero << endl;

    for (int i = 0; i <= 10; i++){ //bucle for
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    return 0;
}
