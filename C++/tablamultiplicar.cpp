#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Introduce un número " << endl;
	cin >> n;
	for (int j =1;  j <= 10; j++) {
	cout << n << "x" << j << " = " << n * j << endl;	
	} 
	return 0;
}
