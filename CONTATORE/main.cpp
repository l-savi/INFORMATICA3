#include <iostream>
#include "Contatore.h"
#include "ContatoreDoppio.h"


using namespace std;

int main(){

    cout<<"Contatore: "<<endl;

    Contatore c;

    c.inc();

    c.inc();

    c.dec();

    c.stampa();

    cout<<"ContatoreDoppio: "<<endl;

    ContatoreDoppio c2;

    c2.inc();

    c2.inc();

    c2.dec();

    c2.stampa();
}
