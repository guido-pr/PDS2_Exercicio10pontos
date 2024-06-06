#include <vector>
#include <string>
#include <iostream>
#include <vector>

class Veiculo {
protected:
 std::string marca;
 std::string modelo;
 int capacidade; // Capacidade de carga em toneladas
public:
 Veiculo(const std::string& marca, const std::string& modelo, int
capacidade)
 : marca(marca), modelo(modelo), capacidade(capacidade) {}
 virtual void exibirDados() const {
 std::cout << "Marca: " << marca << ", Modelo: " << modelo <<
", Capacidade: " << capacidade << " toneladas\n";
 }
};

class Caminhao : public Veiculo {
private:
 int eixos;
public:
 Caminhao(const std::string& marca, const std::string& modelo, int
capacidade, int eixos)
 : Veiculo(marca, modelo, capacidade), eixos(eixos) {}
 void exibirDados() const override {
 std::cout << "Caminhão - ";
 Veiculo::exibirDados();
 std::cout << "Eixos: " << eixos << "\n";
 }
};

class Van : public Veiculo {
private:
 int passageiros;
public:
 Van(const std::string& marca, const std::string& modelo, int
capacidade, int passageiros)
 : Veiculo(marca, modelo, capacidade), passageiros(passageiros)
{}
 void exibirDados() const override {
 std::cout << "Van - ";
 Veiculo::exibirDados();
 std::cout << "Passageiros: " << passageiros << "\n";
 }
};

int main(){
    const Caminhao caminhao1("Volvo", "FMX", 22, 3);
    const Caminhao caminhao2("Mercedes", "Arocs", 24, 3);
    const Caminhao caminhao3("Volkswagen", "Meteor", 46, 3);
    const Van van1("Mercedes", "Sprinter 413", 2, 19);
    const Van van2("Ford", "Transit", 1.5, 14);
    const Van van3("Fiat", "Ducato Combinato", 1, 10);

    std::vector<const Veiculo*> veiculos;
    veiculos.push_back(&caminhao1);
    veiculos.push_back(&caminhao2);
    veiculos.push_back(&caminhao3);
    veiculos.push_back(&van1);
    veiculos.push_back(&van2);
    veiculos.push_back(&van3);

    for(const auto* veiculo : veiculos){
        veiculo->exibirDados();
    }

}
