#include"ContaEspecial.h"
#include <string>
using namespace std;

int main(){
    string nome, numero;
    double salario, deposito, sacar;
    getline(cin,nome);
    getline(cin, numero);
    cin>>salario;
    cin>>deposito;
    cin>>sacar;
    getchar();
    Conta *conta = new Conta(nome, numero, salario);
    conta->depositar(deposito);
    conta->sacar(sacar);
    cout<<conta->getNome()<<", "<<"cc: "<<conta->getNumeroConta()<<"salário "<<conta->getSalario();
    conta->saldoTotalDisponivel();
    cout<<"\n";
    delete conta;
    getline(cin,nome);
    getline(cin, numero);
    cin>>salario;
    cin>>deposito;
    cin>>sacar;
    getchar();
    ContaEspecial *contaE = new ContaEspecial(nome,numero,salario);
    contaE->depositar(deposito);
    contaE->sacar(sacar);
     cout<<contaE->getNome()<<", "<<"cc: "<<contaE->getNumeroConta()<<", salário "<<contaE->getSalario();
     contaE->saldoTotalDisponivel();
    delete contaE;
    return 0;
}