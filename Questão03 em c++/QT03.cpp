#include <iostream>
#include "QT03.h"

using namespace std;
int main(){
	
	
	QT03 *ret = new QT03();
	

		
		std::cout << "AREA: " << ret -> getArea() << "\n";
		std::cout << "PERIMETRO: " << ret -> getPerimetro() << "\n";
		std::cout << "DIAGONAL: " << ret -> getDiagonal() << "\n";
		
	
	
	
	
	
	return 0;
}
