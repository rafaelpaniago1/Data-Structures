#ifndef HEAP_H
#define HEAP_H
#include "TipoItem.hpp"
#include "TipoNo.hpp"
class Heap{

    public:

        Heap();
        ~Heap();
        void Insere(TipoItem item);
        void InsereRecursivo(TipoNo* &p, TipoItem item);
        TipoNo* Remove(TipoItem item);
        TipoNo* RemoveRecursivo(TipoNo* &p, TipoItem item);
        void ApagaRecursivo(TipoNo* &p);
        void Limpa();
        TipoNo* GetRaiz();

    private:

        TipoNo* raiz;
};

#endif