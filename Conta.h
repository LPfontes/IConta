#ifndef CONTA_H
#define CONTA_H
#include"IConta.h"	
class Conta  : public IConta {
	protected:
	std::string nomeCliente,numeroConta;
	double salarioMensal, saldo, limite;

	public:
		void saldoTotalDisponivel();
		void depositar(double valor);
		void sacar(double valor);
		std::string getNome();
		std::string getNumeroConta();
		double getSalario();
		double getSaldo();
		double getLimite();
		void setNome(std::string nome); 
		void setNumeroConta(std::string numero);
		void setSalario(double salario);
		void setSaldo(double saldo);
		void setLimite(double limite);
		void definirLimite();
		Conta(std::string nome,std::string numero,double salario);
		~Conta();

};
#endif