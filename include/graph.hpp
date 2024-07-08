#ifndef GRAPH_H
#define GRAPH_H
#include "TipoNo.hpp"
#include <iostream>
#include <list>

class GraphAdjMatrix{

    public:

        GraphAdjMatrix(int v,int a);
        int* CheckNeigh(int vertex);

    private:

        int** matrix;
        int vertices;
};

#endif