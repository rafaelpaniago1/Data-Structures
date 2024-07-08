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

    if (Vazia()) {
        primeiro = novo;
    } else {
        ultimo->dir = novo;
    }

    ultimo = novo;
    novo->dir = nullptr;
    tamanho++;
}

TipoNo* Fila::Desenfileira() {
    
    if (Vazia())
        throw "Fila está vazia!";

    TipoNo *p = primeiro;
    primeiro = primeiro->dir;
    tamanho--;

    if(Vazia()){
        ultimo = nullptr;
    }

    return p;
}


bool Fila::Vazia(){

    return (tamanho==0) ? true : false;

}