#ifndef TIPONO_H
#define TIPONO_H
#include "TipoItem.hpp"

class TipoNo{

    public:
        
        TipoNo();
        TipoItem item;
        TipoNo* esq;
        TipoNo* dir;
};  

#endif