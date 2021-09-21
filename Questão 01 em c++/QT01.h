#ifndef QT01_H
#define QT01_H

class QT01
{
	public:
		std::string nome01;
		std::string nome02;
		int idade01;
		int idade02;
	
		void imprimir();	
		QT01();
};


	QT01::QT01(){
		
		nome01 = "Maria";
		idade01 = 70;
		
		nome02 = "Joao";
		idade02 = 60;
		
	}

	void QT01::imprimir(){
		
		std::cout << "PRIMEIRA PESSOA: " << nome01 << "\n";
		std::cout << "SEGUNDA PESSOA: " << nome02 << "\n";
		std::cout << "PRIMEIRA PESSOA: " << idade01 << "\n";
		std::cout << "SEGUNDA PESSOA: " << idade02 << "\n";
		
		if(idade01 > idade02){
		
		std::cout << "NOME DA PRIMEIRA POSSOA MAIS VELHA: " << nome01 << "\n";
		std::cout << "IDADE DA PRIMEIRA PESSOA MAIS VELHA: " << idade01 << "\n";
		
		}
	
		else if(idade02 > idade01){
		
		std::cout << "NOME DA SEGUNDA  POSSOA MAIS VELHA: " << nome02 << "\n";
		std::cout << "IDADE DA SEGUNDA PESSOA MAIS VELHA: " << idade02 << "\n";
			
		}		
	}




#endif
