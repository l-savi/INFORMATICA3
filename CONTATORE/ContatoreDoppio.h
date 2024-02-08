#include "Contatore.h"

#ifndef CONTATOREDOPPIO_H
#define CONTATOREDOPPIO_H

class ContatoreDoppio: public Contatore{

    public:
        ContatoreDoppio(int valore = 0, int passo = 1):Contatore(valore, passo){};
        void inc();
        void dec();

};

#endif
