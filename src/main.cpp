#include <iostream>
#include "binary_tree.hpp"
#include <vector>

int main(){

    BinaryTree arvore;
    int n;
    std::cin>>n;
    for(int i = 0;i<n;i++){
        TipoChave k;
        std::cin>>k;
        TipoItem temp(k);
        arvore.Insere(temp);
    }

}