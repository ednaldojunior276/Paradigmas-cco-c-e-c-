#ifndef QT05_H
#define QT05_H

class QT05
{
	public:
		std::string nome;
		int nota1, nota2, nota3;
		int media;
		
		void imprimir();
		QT05();
	
		int getNota();
		void setNota();
};


	QT05::QT05(){
		nome = "gilson damaso";
		nota1 = 60;
		nota2 = 60;
		nota3 = 60; 
		setNota();		
	}

	int QT05::getNota(){
		return media;
	}

	void QT05::setNota(){
		media = nota1 + nota2 + nota3;
	}
	
	void QT05::imprimir(){
		
		std::cout << "NOME DO ALUNO: " << nome << "\n";	
		std::cout << "NOTA 01: " << nota1 << "\n";	
		std::cout << "NOTA 02: " << nota2 << "\n";	
		std::cout << "NOTA 03: " << nota3 << "\n";	
	
		if(media >= 60){
			std::cout << "ALUNO APROVADO,  NOTA FINAL: " << media<<"\n";
		}
		else{
			int m = 60 - media  ;
			
			std::cout << "ALUNO REPROVADO" << "\n";
			std::cout << "RESTAM: " << m << " PONTOS PARA O ALUNO SER APROVADO" << "\n";
		}
	}
#endif
