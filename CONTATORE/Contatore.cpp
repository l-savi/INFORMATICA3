#include <iostream>
#include "Contatore.h"

using namespace std;

Contatore::~Contatore(){
    cout<<"Hai chiamato il distruttore"<<endl;
}

int Contatore::getValore(){
    return valore;
}

void Contatore::setValore(int valore){
    this -> valore = valore;
}

int Contatore::getPasso(){
    return passo;
}

void Contatore::setPasso(int passo){
    this -> passo = passo;
}

void Contatore::reset(){
    valore = 0;
}

void Contatore::inc(){
    valore += passo;
}

void Contatore::dec(){
    valore -= passo;
}

void Contatore::stampa(){
    cout<<"valore = "<<valore<<endl;
    cout<<"passo = "<<passo<<endl;
}
