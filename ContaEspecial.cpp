#include "ContaEspecial.h"  
	
ContaEspecial::ContaEspecial(std::string nome,std::string numero,double salario) :  Conta(nome,numero,salario) {   	
}
	
ContaEspecial::~ContaEspecial()
{
	
}
void ContaEspecial::definirLimite(){
    limite = salarioMensal * 3;

}