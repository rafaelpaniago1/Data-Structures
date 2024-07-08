#include "heap.hpp"

TipoNo* Heap::GetRaiz(){

    return raiz;

}

void Heap::Insere(TipoItem item){

    InsereRecursivo(raiz,item);

}

void Heap::Limpa(){

    ApagaRecursivo(raiz);

}

Heap::~Heap(){

    Limpa();

}

void Heap::ApagaRecursivo(TipoNo* &p){

    if(p!=nullptr){

        ApagaRecursivo(p->dir);
        ApagaRecursivo(p->esq);
        delete p;

    }

}

TipoNo* Heap::Remove(TipoItem item){

    return RemoveRecursivo(raiz,item);

}

Heap::Heap(){

    raiz = nullptr;

}

void Heap::InsereRecursivo(TipoNo* &p, TipoItem item){



}

TipoNo* RemoveRecursivo(TipoNo* &p, TipoItem item){



}