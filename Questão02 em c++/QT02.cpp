#include <iostream>
#include "QT02.h"

using namespace std;
int main(){
	setlocale(LC_ALL, "");
	
	
	
	QT02 *Q =  new QT02();
	
		Q -> imprimir();
		std::cout << "SAL�RIO 01: " << Q -> getSalario01() << "\n";
		std::cout << "SAL�RIO 02: " << Q -> getSalario02() << "\n";
		std::cout << "SALARIO M�DIO: " << Q -> getMedio() << "\n";
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
