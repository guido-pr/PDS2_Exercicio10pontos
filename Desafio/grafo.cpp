#include "grafo.hpp"
#include <iostream>

using namespace std;

Grafo::Grafo(int v){
    this->v = v;
    adjMatrix = new int*[v];
    for (int i = 0; i < v; i++) {
        adjMatrix[i] = new int[v];
        for (int j = 0; j < v; j++) {
            adjMatrix[i][j] = 0;
        }
    }
}

Grafo::~Grafo() {
    for (int i = 0; i < v; i++) {
        delete[] adjMatrix[i];
    }
    delete[] adjMatrix;

    cout << "Destruindo grafo" << endl;
}

void Grafo::adicionarAresta(int v1, int v2){
    this->adjMatrix[v1][v2] = 1;
    this->adjMatrix[v2][v1] = 1;
}

void Grafo::vizinho(int v1, int v2){
    if(adjMatrix[v1][v2] == 1)
        cout << v1 << " e " << v2 << " sao vizinhos " <<endl;
    if(adjMatrix[v1][v2] == 0)
        cout << v1 << " e " << v2 << " nao sao vizinhos " <<endl;
}

void Grafo::vizinhos(int v1){
    for(int i = 0; i < v; i++){
            if(adjMatrix[v1][i] == 1)
                cout << v1 << " e " << i << " sao vizinhos " <<endl; 
    }
}