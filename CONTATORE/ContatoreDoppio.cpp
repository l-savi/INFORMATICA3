#include <iostream>
#include "ContatoreDoppio.h"

void ContatoreDoppio::inc() {
    Contatore::inc();
    Contatore::inc();
}

void ContatoreDoppio::dec() {
    Contatore::dec();
    Contatore::dec();
}
