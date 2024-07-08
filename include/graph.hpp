#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>

class GraphAdjMatrix {
public:
    GraphAdjMatrix(int v, int a);
    ~GraphAdjMatrix();
    int* CheckNeigh(int vertex);

private:
    int vertices;
    int** matrix;
};

#endif