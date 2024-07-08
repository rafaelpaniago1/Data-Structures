#include "graph.hpp"

GraphAdjMatrix::GraphAdjMatrix(int v, int a) {
    vertices = v;

    // Alocar dinamicamente a matriz de adjacência
    matrix = new int*[vertices];
    for (int i = 0; i < vertices; ++i) {
        matrix[i] = new int[vertices];
        for (int j = 0; j < vertices; ++j) {
            matrix[i][j] = 0;
        }
    }

    // Ler arestas e preencher a matriz de adjacência
    int x, y;
    for (int i = 0; i < a; ++i) {
        std::cin >> x >> y;
        matrix[x][y] = 1;
        matrix[y][x] = 1; // Para grafos não direcionados
    }
}

int* GraphAdjMatrix::CheckNeigh(int vertex) {
    // Alocar memória suficiente para o array de vizinhos
    int* neigh = new int[vertices];
    int k = 0;

    // Preencher o array de vizinhos
    for (int i = 0; i < vertices; ++i) {
        if (matrix[vertex][i]) {
            neigh[k] = i;
            k++;
        }
    }

    // Retornar o array de vizinhos
    return neigh;
}

GraphAdjMatrix::~GraphAdjMatrix() {
    // Liberar memória alocada dinamicamente
    for (int i = 0; i < vertices; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}