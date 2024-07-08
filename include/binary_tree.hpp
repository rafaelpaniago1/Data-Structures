#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include "TipoNo.hpp"
#include "Fila.hpp"
#include <iostream>

class BinaryTree{

public:
    
    BinaryTree();
    ~BinaryTree();
    void Insere(TipoItem item);
    void Caminha(int tipo);
    void Limpa();
    TipoNo* GetRaiz();

private:

    void InsereRecursivo(TipoNo* &p, TipoItem item);
    void ApagaRecursivo(TipoNo* p);
    void PorNivel();
    void PreOrdem(TipoNo* p);
    void InOrdem(TipoNo* p);
    void PosOrdem(TipoNo* p);
    TipoNo *raiz;

};

#endif