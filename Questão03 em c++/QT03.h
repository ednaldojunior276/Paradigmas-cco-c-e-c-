#ifndef QT03_H
#define QT03_H
#include <math.h>

class QT03
{
	public:
	double largura;
	double altura;
	double a, p , d;
	
	void imprimir();
	
	QT03();
	
		double getArea();
		double getPerimetro();
		double getDiagonal();
		
		void setArea();
		void setPerimetro();
		void setDiagonal();
};
	
	QT03::QT03(){
		largura = 3;
		altura = 4;
		setArea();
		setPerimetro();
		setDiagonal();
	}
	//METODOS
		double QT03::getArea(){
			return a;
		} 
		
		void QT03::setArea(){
			a = largura * altura;
		}
	
		double QT03::getPerimetro(){
			return p;
		} 
		
		void QT03::setPerimetro(){
			p = 2 * (largura + altura);
		}
	
		double QT03::getDiagonal(){
			return d;
		} 
		
		void QT03::setDiagonal(){
			d = sqrt(pow(largura, 2) + pow (altura, 2));
		}
	
	
	

		
#endif
