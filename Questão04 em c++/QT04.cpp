#include <iostream>
#include "QT04.h"

using namespace std;
int main(){
	setlocale(LC_ALL, "");
	
	
	QT04 *q =  new QT04();
	
		q -> imprimir();
			
		
		std::cout << "SALARIO LIQUIDO: " << q -> getSalarioLiq() << "\n";
		std::cout << "AUMENTO: " << q -> getSalario() << "\n";
		std::cout << "SALARIO ATUALIZADO: " << q -> getAumento() << "\n";
		
		
	
	
	
	return 0;
}
