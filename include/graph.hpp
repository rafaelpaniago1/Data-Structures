#ifndef GRAPH_H
#define GRAPH_H
#include "TipoNo.hpp"
#include <iostream>
#include <list>
#define MAXTAM 10000

class GraphAdjMatrix{

    public:

        GraphAdjMatrix(int v,int a);
        int* CheckNeigh(int vertex);

    private:

        int** matrix;
        int vertices;
};

#endif