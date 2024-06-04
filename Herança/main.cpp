#include <iostream>
#include <string>
#include "Funcionario.hpp"
#include "FuncionarioRegular.hpp"
#include "Estagiario.hpp"
#include "Gerente.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{

    FuncionarioRegular* Regular = new FuncionarioRegular("Sergio", 313, 4123.45);
    Estagiario* estagiario = new Estagiario("Francisco", 214, 1517.56);
    Gerente* gerente = new Gerente("Laura", 407, 6034.78, 1723.31);

    cout << "Salario do funcionario regular:\t";
    cout << Regular->calcularSalarioTotal() << endl;

    cout << "Salario do estagiario:\t";
    cout << estagiario->calcularSalarioTotal() << endl;

    cout << "Salario do gerente:\t";
    cout << gerente->calcularSalarioTotal() << endl;

    delete Regular;
    delete estagiario;
    delete gerente;

    return 0;
}
