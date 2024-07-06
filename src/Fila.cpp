#include "Fila.hpp"
#include "TipoNo.hpp"
Fila::Fila(){

    primeiro = new TipoNo;
    primeiro = ultimo;
    tamanho = 0;

}

Fila::~Fila(){

    Limpa();

}

void Fila::Limpa(){

    ApagaRecursivo(primeiro);
    primeiro = nullptr;
    ultimo = nullptr;

}

void Fila::ApagaRecursivo(TipoNo* p){

    if(p!=nullptr){
        ApagaRecursivo(p->dir);
        delete p;
    }
}

void Fila::ImprimeRecursivo(TipoNo* p){

    if(p!=nullptr){
        p->item.Imprime();
        ImprimeRecursivo(p->dir);
    }
}

void Fila::Imprime(){

    if(primeiro == nullptr){

        std::cout<<"Fila Vazia!"<<std::endl;
    }
    ImprimeRecursivo(primeiro);
}

void Fila::Enfileira(TipoNo* novo) {
    if (novo == nullptr) {
        throw "O nó fornecido é nulo!";
    }

    if (tamanho == 0) {
        primeiro = novo;
    } else {
        ultimo->dir = novo;
    }

    ultimo = novo;
    tamanho++;
}

TipoNo* Fila::Desenfileira() {
    TipoNo *p;
    
    if (tamanho == 0)
        throw "Fila está vazia!";

    p = primeiro;
    primeiro = primeiro->dir;
    tamanho--;
    return p;
}


bool Fila::Vazia(){

    return (tamanho==0) ? true : false;

}