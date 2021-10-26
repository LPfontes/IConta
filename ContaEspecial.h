#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include"Conta.h"
	
class ContaEspecial : public Conta  {
	private:

	public:
		void definirLimite();
		ContaEspecial(std::string nome,std::string numero,double salario);
		~ContaEspecial();

};
#endif