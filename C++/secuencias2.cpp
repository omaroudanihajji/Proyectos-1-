#include <iostream>
using namespace std;

int main(){
	double elemento;
	float suma = 0;
	int contador = 0;
	
	cout << " Introduzca las notas de los alumno (termina con -1)" << endl;
	cin >> elemento;
	
	if (elemento == -1){
		cout << " No se introdujeron notas " << endl;
	} else {
		suma = 0;
		contador = 0;
	
	
	do {
		cout << " Nota introducida " << elemento << endl;
		cin >> elemento;
		if ( elemento != -1){
			suma += elemento;
			contador++;
		}
	} while (elemento != -1);
	
	double media = suma / contador;
	
	cout << " Nuḿero de estudiantes: " << contador << endl;
	cout << "Nota media de la clase: " << media << endl;
	
	}
	return 0;
}
