#ifndef QT04_H
#define QT04_H

class QT04
{
	public:
		std::string nome;
		double salarioBruto;
		double imposto;
		
		double salarioLiq ;
		double salarioL;
		double aumentoo;
		
		void imprimir();
		
		QT04();
		
		double getSalarioLiq();
		void setSalarioLiq();
		
		double getSalario();
		void setSalario(double valor);
				
		double getAumento();
		void setAumento();			
};

	QT04::QT04(){
		nome = "Joao silva";
		salarioBruto = 6000;
		imposto = 1000;	
		setSalarioLiq();
		setSalario(10);
		setAumento();
	}

	double QT04::getSalarioLiq(){
		return salarioLiq;
	}

	void QT04::setSalarioLiq(){
		salarioLiq = salarioBruto - imposto;
		
	}
	
	double QT04::getSalario(){
		return salarioL; 
	}
	
	void QT04::setSalario(double valor){
		salarioL = salarioLiq * (valor/100);
	}

	double QT04::getAumento(){
		return aumentoo;
	}
	
	void QT04::setAumento(){
		aumentoo = (salarioL + salarioLiq);
	}
	
	void QT04::imprimir(){
		std::cout << "NOME: " << nome << "\n";	
		std::cout << "SALÁRIO BRUTO: " << salarioBruto << "\n";	
		std::cout << "IMPOSTO: " << imposto << "\n";
		
	}
	


#endif
