#include <iostream>
using namespace std;

int main(){
    float lado, altura, base, cuadrado, triangulo;

    cout << "Introduzca el lado en centametros del cuadrado" << endl;
    cin >> lado;
    cout << "Introduzca la altura en centimetros del triangulo" << endl;
    cin >> altura;
    cout << "Introduzca la base en centimetros del triangulo" << endl;
    cin >> base;
    cuadrado = lado * lado;
    triangulo = (base * altura)/2;

    cout << "El area del cuadrado es de " << cuadrado << " centimetros cuadrados" << endl;
    cout << "El area del triangulo es de " << triangulo << " centimetros cuadrados" << endl;

    return 0;
}