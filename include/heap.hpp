#ifndef HEAP_H
#define HEAP_H
#include "TipoItem.hpp"
#include "TipoNo.hpp"
const int MAX = 100000;

class Heap{

    public:
    
        Heap();
        int GetAncestral(int i);
        int GetSucDir(int i);
        int GetSucEsq(int i);
        void Insert(int n);
        int Remove();
        void VerificaSubArvore(int v, int n, int raiz);
        void ConstroiHeap(int v, int n);
        void HeapSort(int v, int n);

    private:

        int heap[MAX];
        int tamanho;
};

void swap(int* vector, int i, int j){

    int temp = vector[i];
    vector[i] = vector[j];
    vector[j] = temp;
}

#endif