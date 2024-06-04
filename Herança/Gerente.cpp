#include <iostream>
#include <string>
#include "Funcionario.hpp"
#include "Gerente.hpp"

using std::cout;
using std::endl;
using std::string;

Gerente::Gerente(string nome, int id, double salarioBase, double bonusAnual):bonusAnual(bonusAnual),Funcionario(nome, id, salarioBase)
{

}

double Gerente::calcularSalarioTotal()
{
    return salarioBase + bonusAnual;
}

Gerente::~Gerente()
{
    cout << "Demitindo gerente" << endl;
}