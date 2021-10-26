#ifndef ICONTA_H
#define ICONTA_H
#include<iostream>
	
class IConta {
	private:

	public:
		virtual void saldoTotalDisponivel() = 0;
		virtual void depositar(double valor)= 0;
		virtual void sacar(double valor)= 0;
		IConta();
		~IConta();

};
#endif