#ifndef GRAFO
#define GRAFO

class Grafo {
    public:
        int v; //Número de vertices
        int **adjMatrix; //Alocar memória dinamicamente para a matriz de adjacência
    
    public:
        Grafo(int v); //Construtor
        ~Grafo(); //Destrutor
        void adicionarAresta(int v1, int v2); //Criar aresta entre dois vertices
        void vizinho(int v1, int v2); //Verificar se dois vertices sao vizinhos
        void vizinhos(int v1); //Mostrar os vizinhos de um vértice
};

#endif