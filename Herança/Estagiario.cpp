#include <iostream>
#include <string>
#include "Funcionario.hpp"
#include "Estagiario.hpp"

using std::cout;
using std::endl;
using std::string;

Estagiario::Estagiario(string nome, int id, double salarioFixo):salarioFixo(salarioFixo),Funcionario(nome, id, salarioBase)
{

}

double Estagiario::calcularSalarioTotal()
{
    return salarioFixo;
}

Estagiario::~Estagiario()
{
    cout << "Desligando estagiario" << endl;
}