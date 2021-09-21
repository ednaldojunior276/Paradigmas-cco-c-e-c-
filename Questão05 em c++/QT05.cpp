#include <iostream>
#include "QT05.h"
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	
	QT05 *nota = new QT05();
		nota -> imprimir();	
			std::cout << "NOTA FINAL: " << nota -> getNota() <<"\n";
			
	
	
	return 0;
}
