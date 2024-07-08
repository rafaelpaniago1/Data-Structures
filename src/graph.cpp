#include "graph.hpp"

GraphAdjMatrix::GraphAdjMatrix(int v, int a) {
    int x, y;
    vertices = v;

    for (int i = 0; i < v; ++i) {
        for (int j = 0; j < v; ++j) {
            matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < a; ++i) {
        std::cin >> x >> y;
        matrix[x][y] = 1;
        matrix[y][x] = 1;
    }
}

int* GraphAdjMatrix::CheckNeigh(int vertex) {

    int* neigh = new int[vertices];
    int k = 0;

    for (int i = 0; i < vertices; ++i) {
        if (matrix[vertex][i]) {
            neigh[k] = i;
            k++;
        }
    }

    return neigh;
}