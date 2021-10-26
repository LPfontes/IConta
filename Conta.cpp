#include "Conta.h"  
	
Conta::Conta(std::string nome,std::string numero,double salario)
{
	nomeCliente = nome;
    numeroConta = numero;
    salarioMensal = salario;
    saldo = 0;
    definirLimite();
}
	
Conta::~Conta(){
}
void Conta::saldoTotalDisponivel(){
    std::cout<<", saldo total disponível: "<< saldo + limite<<std::endl;
}
void Conta::depositar(double valor){
    saldo = saldo + valor;
}
void Conta::sacar(double valor){
     saldo = saldo - valor;
    
}
std::string Conta::getNome(){
    return nomeCliente;
}
std::string Conta::getNumeroConta(){
    return numeroConta;
}
double Conta::getSalario(){
    return salarioMensal;
}
double Conta::getSaldo(){
    return saldo;
}
double Conta::getLimite(){
    return limite;
}
void Conta::setNome(std::string nome){
  nomeCliente = nome;  
} 
void Conta::setNumeroConta(std::string numero){
    numeroConta = numero;
}
void Conta::setSalario(double salario){
    salarioMensal = salario;
}
void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}
void Conta::setLimite(double limite){
    this->limite = limite;
}
void Conta::definirLimite(){
    this->limite = salarioMensal * 2;
}
