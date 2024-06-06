#include "grafo.hpp"
#include <iostream>

using namespace std;

int main(){
    Grafo grafo(5);

    grafo.adicionarAresta(0,1);
    grafo.adicionarAresta(0,3);
    grafo.adicionarAresta(1,3);
    grafo.adicionarAresta(1,4);
    grafo.adicionarAresta(1,2);
    grafo.adicionarAresta(2,4);
    grafo.adicionarAresta(3,4);

    
    grafo.vizinhos(0);
    grafo.vizinhos(4);
    grafo.vizinhos(1);

    cout << endl;

    grafo.vizinho(0,1);
    grafo.vizinho(4,0);

    cout << endl;

    return 0;
}