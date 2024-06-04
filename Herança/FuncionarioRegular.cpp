#include <iostream>
#include <string>
#include "Funcionario.hpp"
#include "FuncionarioRegular.hpp"

using std::cout;
using std::endl;
using std::string;

FuncionarioRegular::FuncionarioRegular(string nome, int id, double salarioBase):Funcionario(nome, id, salarioBase)
{

}

double FuncionarioRegular::calcularSalarioTotal()
{
    return salarioBase;
}

FuncionarioRegular::~FuncionarioRegular()
{
    cout << "Demitindo funcionario regular" << endl;
}

