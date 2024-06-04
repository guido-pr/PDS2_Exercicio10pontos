#ifndef ESTAGIARIO
#define ESTAGIARIO

#include <string>
#include "Funcionario.hpp"
using std::string;

class Estagiario : public Funcionario
{
    private:
    double salarioFixo;

    public:
    Estagiario(string nome, int id, double salarioFixo);
    double calcularSalarioTotal() override;
    ~Estagiario() override;
};

#endif