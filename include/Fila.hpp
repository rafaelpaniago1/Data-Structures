#ifndef FILA_H
#define FILA_H
#include "TipoNo.hpp"
#include <iostream>


class Fila{

    public:

        Fila();
        ~Fila();
        void Limpa();
        void ApagaRecursivo(TipoNo* p);
        void Enfileira(TipoNo* no);
        TipoNo* Desenfileira();
        void Imprime();
        void ImprimeRecursivo(TipoNo* p);
        TipoNo* primeiro;
        TipoNo* ultimo;
        unsigned int tamanho;
        bool Vazia();
};

#endif