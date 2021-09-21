#ifndef QT02_H
#define QT02_H

class QT02
{
	public:
		std::string nome01;
		std::string nome02;
	
		//PROTÓTIPOS
		int getSalario01();
		int getSalario02();
		int getMedio();
		
		//PROTÓTIPOS
		void setSalario01(int valor);
		void setSalario02(int valor);
		void setMedio();	
		
		QT02();
		void imprimir();
	
	private:
		int salario01;
		int salario02;
		int medio;
};

int QT02::getSalario01(){
		return salario01;
	}

	void QT02::setSalario01(int valor){
		salario01 = valor;
	}
	
	
	int QT02::getSalario02(){
		return salario02;
	}

	void QT02::setSalario02(int valor){
		salario02 = valor;
	}
	
	int QT02::getMedio(){
		return medio;
	}
	
	void QT02::setMedio(){
		medio = (salario01 + salario02)/2;
	}
	
	//CONSTRUTOR
	QT02::QT02(){
	
		nome01 = "Carlos silva";
		setSalario01(6300);
	
		nome02 = "Ana marques";
		setSalario02(6700);	
	
		setMedio();
		
	}


void QT02::imprimir(){
	
	std::cout << "NOME01: " << nome01 <<"\n";
	std::cout << "NOME02: " << nome02 <<"\n";
	
	
}
#endif
