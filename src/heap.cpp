#include "heap.hpp"

void Heap::Insert(int n){

    heap[tamanho] = n;
    int i = tamanho;
    tamanho++;
    while(GetAncestral(i) >= 0 && heap[GetAncestral(i)] < heap[i]){
        
        swap(heap,i,GetAncestral(i));
        i = GetAncestral(i);

    }
}

int Heap::Remove(){

    int x = heap[0];
    heap[0] = heap[tamanho - 1];
    tamanho --;
    int temp = 0;
    while(heap[temp] < heap[GetSucDir(temp)] || heap[temp] < heap[GetSucEsq(temp)]){

        int i = heap[GetSucDir(temp)];
        if (i < heap[GetSucEsq(temp)]) i = GetSucEsq(temp);
        swap(heap, heap[temp], heap[i]);
        temp = i;

    }
    return x;
}

Heap::Heap(){

    for(int i =0;i<MAX;i++){

        heap[i] = -1;

    }
}

int Heap::GetAncestral(int i){

    return (i-1)/2;
   
}

int Heap::GetSucDir(int i){
    
    return 2*i + 2;

}

int Heap::GetSucEsq(int i){
    
    return 2*i + 1;

}