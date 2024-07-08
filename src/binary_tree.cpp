#include "binary_tree.hpp"

BinaryTree::BinaryTree(){

    raiz = nullptr;

}

TipoNo* BinaryTree::GetRaiz(){

    return raiz;

}

BinaryTree::~BinaryTree(){

    Limpa();

}

void BinaryTree::Insere(TipoItem item){

    InsereRecursivo(raiz, item);

}

void BinaryTree::InsereRecursivo(TipoNo* &p, TipoItem item){

    if(p==nullptr){
         p = new TipoNo;
         p->item = item;
    }
    else{
        if(item.GetChave() < p->item.GetChave()){
            InsereRecursivo(p->esq,item);
        }
        else{
            InsereRecursivo(p->dir,item);
        }
    }

}

void BinaryTree::PreOrdem(TipoNo* p){

    if(GetRaiz() == nullptr){
        std::cout<<"Árvore Vazia!"<<std::endl;
    }
    if(p!=nullptr){
        p->item.Imprime();
        PreOrdem(p->esq);
        PosOrdem(p->dir);
    }
}

void BinaryTree::InOrdem(TipoNo* p){

    if(GetRaiz() == nullptr){
        std::cout<<"Árvore Vazia!"<<std::endl;
    }
    if(p!=nullptr){
        PreOrdem(p->esq);
        p->item.Imprime();
        PosOrdem(p->dir);
    }
}

void BinaryTree::PosOrdem(TipoNo* p){

    if(GetRaiz() == nullptr){
        std::cout<<"Árvore Vazia!"<<std::endl;
    }
    if(p!=nullptr){
        PreOrdem(p->esq);
        PosOrdem(p->dir);
        p->item.Imprime();
    }
}

void BinaryTree::PorNivel(){
    Fila F;  // fila de apontadores para nos
    TipoNo *p;

    F.Enfileira(raiz);
    while(!F.Vazia()) {
        p = F.Desenfileira();
        if(p!=NULL) {
            p->item.Imprime();
            F.Enfileira(p->esq);
            F.Enfileira(p->dir);
        }
    }
}

void BinaryTree::Limpa(){

    ApagaRecursivo(raiz);
    raiz = nullptr;

}

void BinaryTree::ApagaRecursivo(TipoNo* p){

    if(p!=nullptr){

        ApagaRecursivo(p->dir);
        ApagaRecursivo(p->esq);
        delete p;

    }
}