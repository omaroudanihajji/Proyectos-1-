//fibonacci
#include <iostream>
using namespace std;

int main(){
	int n, x = 0, y = 1, z = 1;  
	// n es cuantos valores quiero que me de
	
	cout << "Introduzca el número de elementos" << endl;
	cin >> n;
	cout << "1 "; 
	for(int i = 1; i <n; i++){  //bucle for
		z = x + y;
		cout << z << " ";
		x = y;   //Actualizando las variables para que cambien.
		y = z;
				
	}
	
	
	return 0;
}
