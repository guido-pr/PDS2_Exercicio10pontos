#include <iostream>
#include "Funcionario.hpp"

using std::cout;
using std::endl;
using std::string;

Funcionario::Funcionario(string nome, int id, double salarioBase):nome(nome), id(id), salarioBase(salarioBase)
{

}

double Funcionario::calcularSalarioTotal()
{
    return salarioBase;
}

Funcionario::~Funcionario()
{
    
}